/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:31:44 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/25 22:31:45 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int		parse_tokens(t_buffer *buf, int header_end, t_header *h)
{
	char	tokens[NB_TOKENS];
	int		i;
	int		cursor;

	cursor = header_end;
	i = NB_TOKENS;
	while (i > 0 && --cursor > 0 &&
		buf->buffer[cursor] > 31 && buf->buffer[cursor] < 127)
	{
		tokens[--i] = buf->buffer[cursor];
	}
	if (i > 0 || cursor < 0 || tokens[0] == tokens[1]
		|| tokens[1] == tokens[2]
		|| tokens[2] == tokens[0])
		return (0);
	h->blank = tokens[0];
	h->block = tokens[1];
	h->solved = tokens[2];
	return (cursor);
}

int		parse_digits(t_buffer *buf, int number_end)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (i < number_end)
	{
		if (buf->buffer[i] < '0' || buf->buffer[i] > '9')
			return (0);
		nb = nb * 10 + (buf->buffer[i] - '0');
		i++;
	}
	return (nb);
}

int		parse_header(t_buffer *buf, t_header *h, t_grid *grid)
{
	int		i;

	i = 0;
	if (buf->buffer[i] < '0' || buf->buffer[i] > '9')
		return (0);
	while (buf->buffer[i] != '\n' && i < buf->size)
		i++;
	if (i == buf->size || buf->buffer[i] != '\n')
		return (0);
	grid->header_end = i;
	if (!(i = parse_tokens(buf, grid->header_end, h)) ||
		!(h->height = parse_digits(buf, i)) ||
		!(grid->tab = (int **)malloc(sizeof(int *) * h->height)))
		return (0);
	return (++grid->header_end);
}
