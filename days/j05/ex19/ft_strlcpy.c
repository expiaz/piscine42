/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:34:58 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/19 13:12:34 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	max;
	unsigned int	srclen;

	srclen = 0;
	while (src[srclen])
		srclen++;
	if (size == 0)
		return (srclen);
	max = size - 1;
	i = 0;
	while (src[i] && i < max)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
