/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 22:08:29 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/06 11:20:40 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(int a, int b)
{
	if (b > a)
	{
		ft_putchar(a / 10 + 48);
		ft_putchar(a % 10 + 48);
		ft_putchar(' ');
		ft_putchar(b / 10 + 48);
		ft_putchar(b % 10 + 48);
		if (a < 98 || b < 99)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		ft_print_numbers(a, b);
		if (++b > 99)
		{
			a++;
			b = 0;
		}
	}
}
