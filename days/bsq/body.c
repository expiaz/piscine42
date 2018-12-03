/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   body.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:31:36 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/25 22:31:38 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int		parse_eol(t_buffer *buf, t_header *h, t_grid *grid)
{
	if (grid->width == 0)
	{
		grid->width = buf->pos - grid->header_end;
		if (grid->width == 0)
			return (0);
		h->width = grid->width;
		buf->pos = grid->header_end;
	}
	else if (grid->pos != grid->width)
		return (0);
	else
		buf->pos++;
	if (++grid->height == h->height)
		return (END_OF_MAP);
	if (!(grid->tab[grid->height] =
		(int *)malloc(sizeof(int) * grid->width)))
		return (0);
	grid->pos = 0;
	return (1);
}

int		parse_char(t_buffer *buf, t_header *h, t_grid *grid)
{
	if (buf->buffer[buf->pos] == h->blank)
		grid->tab[grid->height][grid->pos] = -1;
	else if (buf->buffer[buf->pos] == h->block)
		grid->tab[grid->height][grid->pos] = 0;
	else
		return (0);
	grid->pos++;
	return (1);
}

int		parse_body(t_buffer *buf, t_grid *grid, t_header *h)
{
	int		ret;

	while (buf->pos < buf->size)
	{
		if (grid->width > 0 && grid->pos > grid->width)
			return (0);
		if (buf->buffer[buf->pos] == '\n')
		{
			ret = parse_eol(buf, h, grid);
			if (ret == END_OF_MAP)
				break ;
			if (ret == 0)
				return (0);
		}
		if (grid->width > 0)
			if (!parse_char(buf, h, grid))
				return (0);
		buf->pos++;
	}
	return (1);
}
