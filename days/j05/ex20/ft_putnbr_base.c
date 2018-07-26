/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:01:35 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/19 17:41:27 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_is_printable(char c)
{
	return (c > 31 && c < 127);
}

int		ft_str_index(char *str, char c, int from)
{
	while (str[from])
	{
		if (str[from] == c)
			return (from);
		from++;
	}
	return (-1);
}

void	ft_printnbr(int nb, char *base, int size)
{
	int		next;
	int		rest;
	char	c;

	next = nb / size;
	rest = nb % size;
	if (rest < 0)
		rest = -rest;
	c = base[rest];
	if (next != 0)
		ft_printnbr(next, base, size);
	ft_putchar(c);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;

	size = 0;
	while (base[size])
	{
		if (!ft_is_printable(base[size]) ||
			base[size] == '+' || base[size] == '-' ||
			ft_str_index(base, base[size], size + 1) > -1)
			return ;
		size++;
	}
	if (size > 1)
	{
		if (nbr < 0)
			ft_putchar('-');
		ft_printnbr(nbr, base, size);
	}
}
