/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:21:56 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/18 18:51:16 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_printable(char c)
{
	return (c > 31 && c < 127);
}

int		ft_str_index(char *str, char c, int n)
{
	while (str[n])
	{
		if (str[n] == c)
			return (n);
		n++;
	}
	return (-1);
}

int		atoi_compute_base(char *base)
{
	int		size;

	size = 0;
	while (base[size])
	{
		if (!ft_is_printable(base[size]) ||
			base[size] == '+' || base[size] == '-' ||
			ft_str_index(base, base[size], size + 1) > -1)
			return (0);
		size++;
	}
	if (size < 2)
		return (0);
	return (size);
}

int		ft_atoi_base(char *str, char *base)
{
	int		size;
	int		number;
	int		sign;
	int		i;

	size = atoi_compute_base(base);
	if (!size)
		return (0);
	i = 0;
	sign = str[i] == '-' ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	number = 0;
	while (str[i] && ft_str_index(base, str[i], 0) > -1)
	{
		number = number * size + ft_str_index(base, str[i], 0);
		i++;
	}
	return (number * sign);
}
