/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colles_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salquier <salquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:42:04 by salquier          #+#    #+#             */
/*   Updated: 2018/07/22 17:57:08 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

int		is_colle00(t_data *data)
{
	t_colle c;

	c.tl = 'o';
	c.tm = '-';
	c.tr = 'o';
	c.ml = '|';
	c.mm = ' ';
	c.mr = '|';
	c.bl = 'o';
	c.bm = '-';
	c.br = 'o';
	return (is_colle(data, &c));
}

int		is_colle01(t_data *data)
{
	t_colle c;

	c.tl = '/';
	c.tm = '*';
	c.tr = '\\';
	c.ml = '*';
	c.mm = ' ';
	c.mr = '*';
	c.bl = '\\';
	c.bm = '*';
	c.br = '/';
	return (is_colle(data, &c));
}

int		is_colle02(t_data *data)
{
	t_colle c;

	c.tl = 'A';
	c.tm = 'B';
	c.tr = 'A';
	c.ml = 'B';
	c.mm = ' ';
	c.mr = 'B';
	c.bl = 'C';
	c.bm = 'B';
	c.br = 'C';
	return (is_colle(data, &c));
}

int		is_colle03(t_data *data)
{
	t_colle c;

	c.tl = 'A';
	c.tm = 'B';
	c.tr = 'C';
	c.ml = 'B';
	c.mm = ' ';
	c.mr = 'B';
	c.bl = 'A';
	c.bm = 'B';
	c.br = 'C';
	return (is_colle(data, &c));
}

int		is_colle04(t_data *data)
{
	t_colle c;

	c.tl = 'A';
	c.tm = 'B';
	c.tr = 'C';
	c.ml = 'B';
	c.mm = ' ';
	c.mr = 'B';
	c.bl = 'C';
	c.bm = 'B';
	c.br = 'A';
	return (is_colle(data, &c));
}
