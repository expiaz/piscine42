/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 18:28:43 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/19 21:04:24 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include "operations.h"
# include "ft_strings.h"
# include "ft_io.h"

typedef int			(*t_handler)(int, int);

typedef struct		s_map
{
	char		operator;
	t_handler	handler;
}					t_map;

t_handler			get_handler(char operator);

#endif
