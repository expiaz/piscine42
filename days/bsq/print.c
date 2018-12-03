/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:32:25 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/25 22:32:33 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

char	ft_choose_char(int **grid, t_coords *coords, t_header *h, t_answer *a)
{
	if (grid[coords->y][coords->x] == 0)
		return (h->block);
	else if ((coords->y > a->y - a->size && coords->y <= a->y)
		&& (coords->x > a->x - a->size && coords->x <= a->x))
		return (h->solved);
	else
		return (h->blank);
}

int		ft_print_by_line(int **grid, t_header *h, t_answer *a)
{
	char		*str;
	t_coords	coords;

	coords.y = -1;
	if (!(str = (char *)malloc(sizeof(char) * (h->width + 1))))
		return (0);
	while (++coords.y < h->height)
	{
		coords.x = -1;
		while (++coords.x < h->width)
			str[coords.x] = ft_choose_char(grid, &coords, h, a);
		free(grid[coords.y]);
		grid[coords.y] = NULL;
		str[coords.x] = '\n';
		write(1, str, h->width + 1);
	}
	free(str);
	return (1);
}
