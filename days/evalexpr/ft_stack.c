/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 23:14:37 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/22 12:50:12 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef union 	u_operande {
	int			n;
	t_op		op;
}				t_operande;

typedef struct	s_op
{
	t_operande	left;
	t_operande	right;
	char		op;
}				t_op;

t_node		*ft_create_node(void *data)
{
	t_node		e;

	if (!(e = (t_node *)malloc(sizeof(t_node))))
		return (NULL);
	e->next = NULL;
	e->data = data;
	return (e);
}

void		ft_push(t_node **stack, void *data)
{
	t_op op;

	
}

t_op {
	t_op	left;
	t_op	right;
	int		number;
	handler	handler;
}

t_node {
	int		state;
	t_op	op;
	t_node	next;
}

/*
sign:		+|-
number:		[0-9]+
operator:	[+-*%/]
operation:	[(] operande operator operande [operator operation] [)]
 */

t_op		*parse(char *str)
{
	int		i;
	t_list	stack;
	t_op	op;

	i = 0;
	state = 0;
	ft_push(&stack, operation);
	while (str[i])
	{
		stack->state = state % 2;
		if (str[i] == '(')
			ft_push(&stack, create_op());

		trim blanks;

		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		while (is_number(str[i]))
		{
			n = number;
			i++;
		}

		trim blanks;

		if (str[i] == ')')
		{
			if (state == LEFT)
				return (0);
			op = ft_pop(&stack);
			state = stack->state;

			trim blanks;
		}

		handle = get_handler(operator);
		if (state->state == 0)
		{
			stack->left = number * sign;
			stack->op = handle;
		}
		else
		{
			if (operator >= stack->op)
			{
				op = create_op();
				op->left = number * sign;
				op->op = handle;
				ft_push(&stack, op);
			}
			else
			{
				op = ft_pop(&stack);
				if (stack == NULL)
				{
					op->left = number * sign;
					op->op = handle;
					
				}
			}
		}

		trim blanks;
		
		state = ++state % 2;
	}
	
	if (ft_length(stack) > 1)
		return (NULL);
	ret = (t_op *)stack->data;
	free(stack);
	return (ret);
}
