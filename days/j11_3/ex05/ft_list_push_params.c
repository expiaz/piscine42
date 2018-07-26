/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 14:59:47 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 22:49:50 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*e;
	int		i;

	i = 0;
	while (i < ac)
	{
		e = ft_create_elem(av[i]);
		e->next = head;
		head = e;
		i++;
	}
	return (head);
}
