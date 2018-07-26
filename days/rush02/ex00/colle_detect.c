/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_detect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <rgidon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 16:35:11 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/22 19:26:55 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"
#include "ft_strings.h"

int		check_line(char *str, char left, char mid, char right)
{
	int		i;
	int		len;

	len = ft_strlen(str);
	if (str[0] != left || (len > 1 && str[len - 1] != right))
		return (0);
	i = 1;
	while (i < len - 1)
	{
		if (str[i] != mid)
			return (0);
		i++;
	}
	return (1);
}

int		is_colle(t_data *data, t_colle *c)
{
	if (data->top != NULL)
	{
		if (!(check_line(data->top, c->tl, c->tm, c->tr)))
			return (0);
		if (data->mid != NULL)
			if (!(check_line(data->mid, c->ml, c->mm, c->mr)))
				return (0);
		if (data->bot != NULL)
			if (!(check_line(data->bot, c->bl, c->bm, c->br)))
				return (0);
		return (1);
	}
	return (1);
}
