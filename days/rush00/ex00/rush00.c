/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:26:43 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/07 10:49:04 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
** dessine un rectangle sur la sortie standard
** @param {int} x la largeur du rectangle
** @param {int} y la longueur du rectangle
*/

void	rush(int x, int y)
{
	int		rows;
	int		cols;

	rows = 0;
	while (rows < y)
	{
		cols = 0;
		while (cols < x)
		{
			if ((rows == 0 || rows == y - 1) && (cols == 0 || cols == x - 1))
				ft_putchar('o');
			else if (cols == 0 || cols == x - 1)
				ft_putchar('|');
			else if (rows == 0 || rows == y - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			cols++;
		}
		rows++;
		ft_putchar('\n');
	}
}
