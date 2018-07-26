/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:50:55 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/19 20:03:30 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

t_handler		get_handler(char operator)
{
	t_map	map[OPERATORS];
	int		i;

	map[0].operator = ADD;
	map[0].handler = &add;
	map[1].operator = SUB;
	map[1].handler = &sub;
	map[2].operator = MUL;
	map[2].handler = &mul;
	map[3].operator = DIV;
	map[3].handler = &div;
	map[4].operator = MOD;
	map[4].handler = &mod;
	i = 0;
	while (i < OPERATORS)
	{
		if (map[i].operator == operator)
			return (map[i].handler);
		i++;
	}
	return (NULL);
}

int				main(int argc, char **argv)
{
	int			a;
	int			b;
	t_handler	handler;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_strlen(argv[2]) != 1 || !(handler = get_handler(argv[2][0])))
	{
		ft_putstr("0\n");
		return (0);
	}
	if (b == 0 && (argv[2][0] == DIV || argv[2][0] == MOD))
	{
		ft_putstr(argv[2][0] == DIV ?
			"Stop : division by zero\n" :
			"Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(handler(a, b));
	ft_putchar('\n');
	return (0);
}
