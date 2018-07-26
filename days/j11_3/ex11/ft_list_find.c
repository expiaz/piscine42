/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 18:26:10 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 13:46:57 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref,
		int (*cmp)())
{
	t_list		*e;

	e = begin_list;
	while (e)
	{
		if ((*cmp)(e->data, data_ref) == 0)
			return (e);
		e = e->next;
	}
	return (NULL);
}
