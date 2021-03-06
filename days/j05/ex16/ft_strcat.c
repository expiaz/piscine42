/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:01:57 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 21:47:39 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*end;

	end = dest;
	while (*end)
		end++;
	i = 0;
	while (src[i])
	{
		end[i] = src[i];
		i++;
	}
	end[i] = '\0';
	return (dest);
}
