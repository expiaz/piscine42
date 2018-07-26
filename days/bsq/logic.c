/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 18:50:31 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/25 20:45:54 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logic.h"

int		min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	return (c);
}

void	calculate_cell(int **grid, t_coords *coords,
						t_answer *answer, int *init)
{
	if (coords->y == 0 || coords->x == 0)
		grid[coords->y][coords->x] = 1;
	else
		grid[coords->y][coords->x] = min(grid[coords->y][coords->x - 1],
				grid[coords->y - 1][coords->x - 1],
				grid[coords->y - 1][coords->x]) + 1;
	if (*init == 0 || grid[coords->y][coords->x] > grid[answer->y][answer->x])
	{
		*init = 1;
		answer->y = coords->y;
		answer->x = coords->x;
	}
}

int		bsq(int **grid, t_header *header, t_answer *answer)
{
	t_coords	coords;
	int			init;

	init = 0;
	coords.y = -1;
	while (++coords.y < header->height)
	{
		coords.x = -1;
		while (++coords.x < header->width)
		{
			if (grid[coords.y][coords.x] != 0)
			{
				calculate_cell(grid, &coords, answer, &init);
			}
		}
	}
	if (!init)
		return (0);
	answer->size = grid[answer->y][answer->x];
	return (1);
}
