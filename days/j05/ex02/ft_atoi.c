/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 11:21:27 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 16:47:55 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
