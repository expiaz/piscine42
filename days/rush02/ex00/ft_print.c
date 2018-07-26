/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salquier <salquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:14:02 by salquier          #+#    #+#             */
/*   Updated: 2018/07/22 20:01:58 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

void	print_result(int colle, t_data *data)
{
	ft_putstr("[colle-0");
	ft_putnbr(colle);
	ft_putstr("] [");
	ft_putnbr(data->width);
	ft_putstr("] [");
	ft_putnbr(data->height);
	ft_putchar(']');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_printnbr(int nb)
{
	int next;
	int rest;

	next = nb / 10;
	rest = nb % 10;
	if (next != 0)
	{
		ft_printnbr(next);
	}
	if (rest < 0)
		ft_putchar('0' - rest);
	else
		ft_putchar('0' + rest);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	ft_printnbr(nb);
}
