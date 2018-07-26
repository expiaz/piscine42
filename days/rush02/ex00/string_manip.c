/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_manip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:04:33 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/22 19:23:25 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

void	ft_strncpy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_strncat(char *dest, char *src, int n)
{
	int		i;
	int		j;

	i = ft_strlen(dest);
	j = 0;
	while (j < n && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
