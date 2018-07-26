/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:27:21 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/13 12:51:14 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# define CLOSE 0
# define OPEN 1

typedef int		t_ft_bool;

typedef struct	s_door {
	int			state;
}				t_door;

void			close_door(t_door *door);

void			open_door(t_door *door);

t_ft_bool		is_door_open(t_door *door);

t_ft_bool		is_door_close(t_door *door);

#endif
