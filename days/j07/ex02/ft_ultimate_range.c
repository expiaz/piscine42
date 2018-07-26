/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:21:00 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/20 13:30:47 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (i);
}
