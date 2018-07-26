/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:41:00 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 16:25:35 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;
	int		max;

	i = 0;
	max = nb / 2;
	while (i < max)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
