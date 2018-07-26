/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:08:58 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 21:36:13 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\0');
}

char	**alloc_words(char *str)
{
	int		i;
	int		len;
	char	last;
	char	**words;

	i = 0;
	len = 0;
	last = '\0';
	while (str[i])
	{
		if (is_delimiter(last) && !is_delimiter(str[i]))
			len++;
		last = str[i];
		i++;
	}
	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);
	words[len] = 0;
	return (words);
}

int		ft_wlen(char *str)
{
	int		i;

	i = 0;
	while (!is_delimiter(str[i]))
		i++;
	return (i);
}

char	*alloc_word(char *str)
{
	int		i;
	char	*word;

	if (!(word = (char *)malloc(sizeof(char) * (ft_wlen(str) + 1))))
		return (NULL);
	i = 0;
	while (!is_delimiter(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		n;
	char	last;
	char	**words;

	if (!(words = alloc_words(str)))
		return (NULL);
	n = 0;
	i = 0;
	last = '\0';
	while (str[i])
	{
		if (is_delimiter(last) && !is_delimiter(str[i]))
		{
			if (!(words[n++] = alloc_word(str + i)))
				return (NULL);
			i += ft_wlen(str + i);
		}
		else
			i++;
		last = str[i - 1];
	}
	return (words);
}
