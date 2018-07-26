/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:38:20 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/13 13:59:22 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 65 + 42) % 26 + 65;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 65 - 32 + 42) % 26 + 65 + 32;
		i++;
	}
	return (str);
}
