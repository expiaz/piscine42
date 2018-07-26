/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-ram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 15:08:10 by ede-ram           #+#    #+#             */
/*   Updated: 2018/07/21 23:42:17 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "shared.h"
#include "input.h"
#include "logic.h"
#include "array.h"

void	ft_clear(void)
{
	if (g_values != NULL)
		array_free(g_values);
	if (g_fixed != NULL)
		array_free(g_fixed);
	if (g_copy != NULL)
		array_free(g_copy);
}

int		main(int argc, char **argv)
{
	g_values = NULL;
	g_fixed = NULL;
	g_copy = NULL;
	argv++;
	if (sanitize_input(argc - 1, argv) == TRUE)
	{
		init_values(argv);
		init_fixed(argv);
		if (g_values != NULL && g_fixed != NULL &&
				solve_cell(0, 0) == TRUE && g_copy != NULL)
			array_print(g_copy);
		else
			write(1, "Error\n", 6);
		ft_clear();
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
