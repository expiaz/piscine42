/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:50:55 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 21:45:55 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_printable(char c)
{
	return (c > 31 && c < 127);
}

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
