/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:37:53 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 21:20:17 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}
