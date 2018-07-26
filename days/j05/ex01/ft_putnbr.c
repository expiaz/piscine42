/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:18:50 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 16:46:47 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
