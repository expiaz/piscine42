/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:51:29 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/13 13:58:09 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_suffix_hour(int hour)
{
	return (hour % 24 > 11 ? 'P' : 'A');
}

int		ft_convert_hour(int hour)
{
	hour %= 24;
	if (hour == 0)
		return (12);
	return (hour);
}

void	ft_takes_place(int hour)
{
	int		start;
	int		end;
	char	start_suffix;
	char	end_suffix;

	start = ft_convert_hour(hour);
	start_suffix = ft_suffix_hour(hour);
	end = ft_convert_hour(hour + 1);
	end_suffix = ft_suffix_hour(hour + 1);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND ", start, start_suffix);
	printf("%d.00 %c.M.\n", end, end_suffix);
}
