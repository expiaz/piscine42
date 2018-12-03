/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:35:17 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/25 21:15:45 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "shared.h"
#include "parse.h"
#include "logic.h"
#include "print.h"

void	ft_free_run(int fd, int **grid, int height)
{
	int		i;

	if (grid != NULL)
	{
		i = 0;
		while (i < height)
		{
			if (grid[i] != NULL)
				free(grid[height]);
			i++;
		}
		free(grid);
	}
	if (fd > 0)
		close(fd);
}

int		run(int fd)
{
	t_header	*header;
	t_answer	*answer;
	
	header = (t_header *) malloc(sizeof(t_header));
	answer = (t_answer *) malloc(sizeof(t_answer));

	//t_header	header;
	//t_answer	answer;
	int			**grid;

	header->height = 0;
	header->width = 0;
	if (!(grid = ft_parse(fd, header)) || !bsq(grid, header, answer))
	{
		ft_free_run(fd, grid, header->height);
		write(1, "map error\n", 10);
		return (0);
	}
	ft_print_by_line(grid, header, answer);
	ft_free_run(fd, grid, 0);

	free(header);
	free(answer);

	return (1);
}

void	parse_files(int nb, char **files)
{
	int		i;
	int		fd;

	i = 0;
	while (i < nb)
	{
		fd = open(files[i], O_RDONLY);
		if (fd > 0)
			if (run(fd))
				close(fd);
		if (nb > 1 && i < nb - 1)
			write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		parse_files(argc - 1, argv + 1);
	else
		run(0);
	return (0);
}
