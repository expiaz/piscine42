/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 19:45:23 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/19 19:58:47 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

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
