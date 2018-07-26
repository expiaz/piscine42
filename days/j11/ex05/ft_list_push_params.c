/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 14:59:47 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 18:22:58 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*e;
	t_list	*prev;
	int		i;

	i = 0;
	head = NULL;
	while (i < ac)
	{
		e = ft_create_elem(av[i]);
		if (head == NULL)
			head = e;
		else
			prev->next = e;
		prev = e;
		i++;
	}
	return (head);
}
