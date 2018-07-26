/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:08:58 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/21 22:12:17 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_stridx(char *str, char c, int i)
{
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	**alloc_words(char *str, char *charset)
{
	int		i;
	int		len;
	char	last;
	char	**words;

	i = 0;
	len = 0;
	last = charset[0];
	while (str[i])
	{
		if (ft_stridx(charset, last, 0) > -1 &&
			ft_stridx(charset, str[i], 0) == -1)
			len++;
		last = str[i];
		i++;
	}
	if (!(words = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	words[len] = 0;
	return (words);
}

int		ft_wlen(char *str, char *charset)
{
	int		i;

	i = 0;
	while (str[i] && ft_stridx(charset, str[i], 0) == -1)
		i++;
	return (i);
}

char	*alloc_word(char *str, char *charset)
{
	int		i;
	char	*word;

	if (!(word = (char *)malloc(sizeof(char) * (ft_wlen(str, charset) + 1))))
		return (NULL);
	i = 0;
	while (str[i] && ft_stridx(charset, str[i], 0) == -1)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		n;
	char	last;
	char	**words;

	if (!(words = alloc_words(str, charset)))
		return (NULL);
	n = 0;
	i = 0;
	last = charset[0];
	while (str[i])
	{
		if (ft_stridx(charset, last, 0) > -1 &&
			ft_stridx(charset, str[i], 0) == -1)
		{
			if (!(words[n++] = alloc_word(str + i, charset)))
				return (NULL);
			i += ft_wlen(str + i, charset);
		}
		else
			i++;
		last = str[i - 1];
	}
	return (words);
}

int		main(int argc, char ** argv)
{
	ft_print_words_tables(ft_split(argv[1], argv[2]));
}
