/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:54:51 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/24 18:39:39 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHARED_H
# define SHARED_H

typedef struct		s_coords
{
	int		x;
	int		y;
}					t_coords;

typedef struct		s_header
{
	char	blank;
	char	block;
	char	solved;
	int		height;
	int		width;
}					t_header;

typedef struct		s_answer
{
	int		x;
	int		y;
	int		size;
}					t_answer;

#endif
