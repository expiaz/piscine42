/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-ram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 15:09:28 by ede-ram           #+#    #+#             */
/*   Updated: 2018/07/15 15:09:32 by ede-ram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logic.h"

t_bool	test_line(int x, int y)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (x != i && g_values[y][x] == g_values[y][i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

t_bool	test_column(int x, int y)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (y != i && g_values[y][x] == g_values[i][x])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

t_bool	test_square(int x, int y)
{
	int i;
	int j;
	int square_x;
	int square_y;

	square_x = x / 3 * 3;
	square_y = y / 3 * 3;
	j = 0;
	while (j < 3)
	{
		i = 0;
		while (i < 3)
		{
			if (x != square_x + i && y != square_y + j &&
				g_values[y][x] == g_values[square_y + j][square_x + i])
				return (FALSE);
			i++;
		}
		j++;
	}
	return (TRUE);
}

t_bool	find_next(int *x, int *y)
{
	if (*x >= 9)
	{
		*x = 0;
		*y += 1;
	}
	while (*y < 9 && g_fixed[*y][*x] == 1)
	{
		while (*x < 9 && g_fixed[*y][*x] == 1)
			*x += 1;
		if (*x >= 9)
		{
			*x = 0;
			*y += 1;
		}
	}
	if (*y >= 9)
		return (FALSE);
	return (TRUE);
}

t_bool	solve_cell(int x, int y)
{
	if (find_next(&x, &y) == FALSE)
	{
		if (g_copy != NULL)
			return (FALSE);
		g_copy = array_copy(g_values);
		if (g_copy == NULL)
			return (FALSE);
		return (TRUE);
	}
	while (g_values[y][x] < 9)
	{
		g_values[y][x]++;
		if (test_line(x, y) && test_column(x, y) && test_square(x, y))
			if (solve_cell(x + 1, y) == FALSE)
				return (FALSE);
	}
	g_values[y][x] = 0;
	return (TRUE);
}
