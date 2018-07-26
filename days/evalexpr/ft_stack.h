/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:02:28 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/21 23:33:46 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

typedef struct	s_node
{
	void	*data;
	t_node	next;
}				t_node;

t_node			ft_create_node(void *data);
void			ft_push(t_node **stack, void *data);
void			ft_pop(t_node **stack);
t_node			ft_peek(t_node **stack);
void			ft_length(t_node **stack, void *data);

#endif
