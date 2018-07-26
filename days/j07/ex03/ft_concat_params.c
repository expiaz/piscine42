/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 21:08:55 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/20 12:11:21 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_args_strlen(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;

	i = 1;
	len = argc;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		len += j;
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		i;
	int		j;
	int		len;

	args = (char *)malloc(sizeof(char) * ft_args_strlen(argc, argv));
	if (args == NULL)
		return (NULL);
	i = 1;
	len = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			args[len++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			args[len++] = '\n';
		i++;
	}
	args[len] = '\0';
	return (args);
}
