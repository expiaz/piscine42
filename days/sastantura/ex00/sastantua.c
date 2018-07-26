/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 11:39:26 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/08 15:00:57 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		base_size(int size)
{
	int length;

	length = ((3 + 2 + size) * size / 2 - 1) * 2;
	while (size)
	{
		length += (size / 2 + 1) * 2;
		size--;
	}
	return (length);
}

void	print_char(int *data, int i)
{
	if (data[3] == data[0] && data[2] > 0 &&
		data[4] >= 2 + data[3] - data[2] &&
		i >= data[5] / 2 - data[2] / 2 && i <= data[5] / 2 + data[2] / 2)
	{
		if (i > 2 + data[5] / 2 - data[2] / 2 &&
			data[4] == 1 + data[3] - data[2] / 2 &&
			i == data[5] / 2 + data[2] / 2 - 1)
			ft_putchar('$');
		else
			ft_putchar('|');
	}
	else
		ft_putchar('*');
}

void	print_line(int *data)
{
	int i;
	int padding;

	padding = (data[1] - data[5]) / 2;
	i = 0;
	while (++i <= padding)
		ft_putchar(' ');
	i = 0;
	ft_putchar('/');
	while (i < data[5])
	{
		print_char(data, i);
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int		tab[6];

	tab[0] = size;
	tab[1] = base_size(size);
	tab[2] = size % 2 == 0 ? size - 1 : size;
	tab[3] = 1;
	tab[5] = 1;
	while (tab[3] <= tab[0])
	{
		tab[4] = 0;
		while (tab[4] < 2 + tab[3])
		{
			print_line(tab);
			tab[5] += 2;
			tab[4]++;
		}
		tab[3]++;
		tab[5] += (tab[3] / 2 + 1) * 2;
	}
}
