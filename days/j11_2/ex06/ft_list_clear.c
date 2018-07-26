/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 17:35:16 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 18:21:43 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list		*e;
	t_list		*nxt;

	if (begin_list == NULL)
		return ;
	e = *begin_list;
	while (e)
	{
		nxt = e->next;
		free(e);
		e = nxt;
	}
	*begin_list = NULL;
}
