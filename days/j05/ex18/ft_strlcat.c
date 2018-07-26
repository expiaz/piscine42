/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 18:14:35 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/19 14:52:47 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	i;
	unsigned int	max;
	unsigned int	srclen;

	destlen = 0;
	while (dest[destlen] && destlen < size)
		destlen++;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (destlen == size)
		return (destlen + srclen);
	max = size - destlen - 1;
	i = 0;
	while (src[i] && i < max)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
