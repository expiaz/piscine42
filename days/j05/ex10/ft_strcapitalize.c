/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:37:53 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 21:47:04 by rgidon           ###   ########.fr       */
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

int		ft_is_alphanum(char c)
{
	return (ft_is_upper(c) || ft_is_lower(c) || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	last;

	last = '\0';
	i = 0;
	while (str[i])
	{
		if (!ft_is_alphanum(last) && ft_is_lower(str[i]))
			str[i] -= 32;
		else if (ft_is_alphanum(last) && ft_is_upper(str[i]))
			str[i] += 32;
		last = str[i];
		i++;
	}
	return (str);
}
