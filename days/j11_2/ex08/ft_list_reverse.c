/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 17:59:25 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 14:02:51 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*e;
	t_list		*prev;
	t_list		*next;

	prev = NULL;
	e = *begin_list;
	while (e)
	{
		next = e->next;
		e->next = prev;
		prev = e;
		e = next;
	}
	*begin_list = prev;
}
