/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:26:07 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/13 11:35:27 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int sum;

	if (base == 1)
		return (0);
	sum = base % 2 == 0 ? base / 2 : base * 3 + 1;
	return (1 + ft_collatz_conjecture(sum));
}
