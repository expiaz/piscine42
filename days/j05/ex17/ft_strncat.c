/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:01:57 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 21:47:18 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	char	*end;

	end = dest;
	while (*end)
		end++;
	i = 0;
	while (i < nb && src[i])
	{
		end[i] = src[i];
		i++;
	}
	end[i] = '\0';
	return (dest);
}
