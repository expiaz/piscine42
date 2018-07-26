/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:07:35 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/23 12:29:32 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_input.h"

char	*ft_realloc(char *old, int size)
{
	char	*new;

	if (!old || !(new = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_strncpy(new, old, size);
	return (new);
}

char	*get_stdin(void)
{
	char	buf[CHUNK];
	char	*str;
	int		n;
	int		len;

	len = 0;
	str = ft_strdup("\0");
	while ((n = read(0, buf, CHUNK)) > 0)
	{
		if (n == -1)
			return (NULL);
		len += n;
		if (!(str = ft_realloc(str, len + 1)))
			return (NULL);
		ft_strncat(str, buf, n);
	}
	return (str);
}
