/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 14:48:19 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 18:27:47 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*e;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		e = *begin_list;
		while (e->next)
			e = e->next;
		e->next = ft_create_elem(data);
	}
}
