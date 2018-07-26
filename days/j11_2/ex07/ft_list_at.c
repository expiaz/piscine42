/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 17:39:55 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 18:21:13 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*e;
	unsigned int	i;

	e = begin_list;
	i = 0;
	while (i < nbr && e)
	{
		e = e->next;
		i++;
	}
	if (i != nbr)
		return (NULL);
	return (e);
}
