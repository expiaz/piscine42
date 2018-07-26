/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:37:53 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 21:20:48 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_is_alpha(char c)
{
	return (ft_is_upper(c) || ft_is_lower(c));
}

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}
