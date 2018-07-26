/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 18:18:40 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 18:19:40 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list		*e;

	e = begin_list;
	while (e)
	{
		if ((*cmp)(e->data, data_ref) == 0)
			(*f)(e->data);
		e = e->next;
	}
}
