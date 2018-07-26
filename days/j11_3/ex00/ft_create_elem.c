/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 14:31:11 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 12:22:24 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list		*e;

	if (!(e = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	e->next = NULL;
	e->data = data;
	return (e);
}
