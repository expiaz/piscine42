/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 23:00:06 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/12 11:52:17 by rgidon           ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(++nb) == 0)
		;
	return (nb);
}
