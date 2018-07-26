/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 12:03:17 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/12 11:52:41 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		f;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	f = 1;
	while (nb > 1)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}