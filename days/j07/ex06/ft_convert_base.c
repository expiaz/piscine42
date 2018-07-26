/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:01:51 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/20 16:36:04 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_stridx(char *str, char c, int i)
{
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		base_to_decimal(char *str, char *base)
{
	int		size;
	int		number;
	int		i;

	size = ft_strlen(base);
	number = 0;
	i = 0;
	while (str[i])
	{
		number = number * size + ft_stridx(base, str[i], 0);
		i++;
	}
	return (number);
}

char	*decimal_to_base(int n, char *base)
{
	int		size;
	int		i;
	char	*str;
	int		nb;

	size = ft_strlen(base);
	nb = n;
	i = 0;
	while (nb)
	{
		i++;
		nb /= size;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	str[i] = '\0';
	while (--i >= 0)
	{
		str[i] = base[n % size];
		n /= size;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (decimal_to_base(base_to_decimal(nbr, base_from), base_to));
}

int		main(int ac, char **av)
{
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
}
