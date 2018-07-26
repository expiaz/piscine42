/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:42:14 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/24 10:53:22 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*cpy;

	if (!(cpy = (int *)malloc(sizeof(int) * length)))
		return (NULL);
	i = 0;
	while (i < length)
	{
		cpy[i] = f(tab[i]);
		i++;
	}
	return (cpy);
}
