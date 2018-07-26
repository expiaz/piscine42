/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:01:38 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/20 13:30:59 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
