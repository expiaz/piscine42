/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:24:42 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/12 11:51:55 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		prime;
	int		next;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	prime = 5;
	next = 2;
	while (prime * prime <= nb)
	{
		if (nb % prime == 0)
			return (0);
		prime += next;
		next = 6 - next;
	}
	return (1);
}
