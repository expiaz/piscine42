/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 18:32:32 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 18:29:28 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list		*e;

	if (begin_list1 == NULL)
		return ;
	if (*begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else
	{
		e = *begin_list1;
		while (e->next)
			e = e->next;
		e->next = begin_list2;
	}
}
