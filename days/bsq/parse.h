/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 13:54:11 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/25 20:46:52 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# include "shared.h"

# define CHUNK		2000000
# define NB_TOKENS	3
# define END_OF_MAP	2

typedef struct	s_buffer
{
	char		buffer[CHUNK];
	int			size;
	int			pos;
}				t_buffer;

typedef struct	s_grid
{
	int			**tab;
	int			header_end;
	int			width;
	int			height;
	int			pos;
}				t_grid;

int				**ft_parse(int fd, t_header *h);
int				parse_body(t_buffer *buf, t_grid *grid,
							t_header *h, int *solvable);
int				parse_header(t_buffer *buf, t_header *h, t_grid *grid);

#endif
