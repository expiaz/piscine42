/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:34:58 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/13 14:03:55 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

void		open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
}

t_ft_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state == OPEN);
}

t_ft_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state == CLOSE);
}
