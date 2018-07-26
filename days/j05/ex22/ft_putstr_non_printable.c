/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:16:27 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/19 13:14:54 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_base(char nb, char *base, int size, int digits)
{
	if (--digits)
		ft_putnbr_base(nb / size, base, size, digits);
	ft_putchar(base[nb % size]);
}

int		ft_is_printable(char c)
{
	return (c > 31 && c < 127);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_printable(str[i]))
		{
			ft_putchar('\\');
			ft_putnbr_base(str[i], "0123456789abcdef", 16, 2);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
