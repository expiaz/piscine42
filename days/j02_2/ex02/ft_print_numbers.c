/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 09:22:54 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/07 17:56:24 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	nombres;

	nombres = '0';
	while (nombres <= '9')
	{
		ft_putchar(nombres);
		nombres++;
	}
}
