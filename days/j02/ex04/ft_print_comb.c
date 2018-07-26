/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 09:33:59 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/06 11:17:58 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(char n1, char n2, char n3)
{
	if (n2 > n1 && n3 > n2)
	{
		ft_putchar(n1);
		ft_putchar(n2);
		ft_putchar(n3);
		if (n1 != '7' || n2 != '8' || n3 != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	while (n1 < '8')
	{
		ft_print_numbers(n1, n2, n3);
		if (++n3 > '9')
		{
			n3 = '0';
			if (++n2 > '8')
			{
				n1++;
				n2 = '0';
			}
		}
	}
}
