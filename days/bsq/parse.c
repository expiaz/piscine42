/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:35:34 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/25 22:31:27 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

void	init_grid(t_grid *grid)
{
	grid->header_end = -1;
	grid->width = 0;
	grid->height = -1;
	grid->pos = 0;
}

int		**ft_parse(int fd, t_header *h)
{
	t_buffer	*buf;
	t_grid		*grid;

	buf = (t_buffer *) malloc(sizeof(t_buffer));
	grid = (t_grid *) malloc(sizeof(t_grid));

	init_grid(grid);
	while ((buf->size = read(fd, buf->buffer, CHUNK)) > 0)
	{
		buf->pos = 0;
		if (grid->header_end == -1)
		{
			if (!parse_header(buf, h, grid))
				return (NULL);
			buf->pos = grid->header_end;
		}
		else
			grid->header_end = 0;
		if (!parse_body(buf, grid, h))
			return (NULL);
	}
	if (buf->size == -1 || grid->height != h->height)
		return (NULL);

	int **tab = grid->tab;
	free(buf);
	free(grid);
	return (tab);
}
