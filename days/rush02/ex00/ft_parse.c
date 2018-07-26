/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:10:44 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/22 18:48:34 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parse.h"

t_data		*init_data(void)
{
	t_data	*data;

	if (!(data = (t_data*)malloc(sizeof(t_data))))
		return (NULL);
	data->top = NULL;
	data->mid = NULL;
	data->bot = NULL;
	data->width = 0;
	data->height = 0;
	return (data);
}

int			stdin_size(char *str, t_data *data)
{
	int		i;
	int		last;

	last = 0;
	i = 0;
	while ((i = ft_stridx(str, '\n', i)) > -1)
	{
		data->height++;
		if (data->width == 0)
			data->width = i;
		else if (i / data->height != data->width)
			return (0);
		i++;
	}
	return (1);
}

int			parse_stdin(char *str, t_data *data)
{
	int		i;
	int		n;
	int		last;

	last = 0;
	i = 0;
	n = 0;
	while ((i = ft_stridx(str, '\n', i)) > -1)
	{
		n++;
		str[i] = '\0';
		if (last == 0)
			data->top = str + last;
		else if (n == data->height)
			data->bot = str + last;
		else
		{
			if (data->mid != NULL &&
				ft_strcmp(str + last, data->mid) != 0)
				return (0);
			data->mid = str + last;
		}
		last = ++i;
	}
	return (1);
}
