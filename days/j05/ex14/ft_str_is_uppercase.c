/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:50:55 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 21:45:07 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_upper(str[i]))
			return (0);
		i++;
	}
	return (1);
}
