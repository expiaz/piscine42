/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 18:28:31 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 18:18:57 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)())
{
	t_list		*e;
	t_list		*prev;
	t_list		*next;

	if (begin_list == NULL)
		return ;
	e = *begin_list;
	prev = NULL;
	while (e)
	{
		next = e->next;
		if ((*cmp)(e->data, data_ref) == 0)
		{
			if (prev)
				prev->next = next;
			else
				*begin_list = next;
			free(e);
		}
		prev = e;
		e = next;
	}
}
