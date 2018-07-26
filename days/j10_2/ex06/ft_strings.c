/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 18:41:24 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/19 19:44:13 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_atoi(char *str)
{
	char	*ptr;
	int		number;
	int		sign;

	ptr = str;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	sign = *ptr == '-' ? -1 : 1;
	if (*ptr == '-' || *ptr == '+')
		ptr++;
	number = 0;
	while (*ptr >= '0' && *ptr <= '9')
	{
		number = number * 10 + (*ptr - '0');
		ptr++;
	}
	return (number * sign);
}
