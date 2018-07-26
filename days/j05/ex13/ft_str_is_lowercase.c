/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:50:55 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 21:48:02 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_lower(str[i]))
			return (0);
		i++;
	}
	return (1);
}
