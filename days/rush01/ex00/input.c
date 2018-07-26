/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thberrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 22:43:07 by thberrid          #+#    #+#             */
/*   Updated: 2018/07/15 14:32:26 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input.h"

t_bool	sanitize_input(int nb_args, char **args)
{
	int		i;
	int		j;

	if (nb_args != 9)
		return (FALSE);
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (args[i][j])
		{
			if (j > 8)
				return (FALSE);
			if ((args[i][j] < '1' || args[i][j] > '9') && args[i][j] != '.')
				return (FALSE);
			j += 1;
		}
		if (j != 9)
			return (FALSE);
		i += 1;
	}
	return (TRUE);
}

void	init_values(char **args)
{
	int		i;
	int		j;

	g_values = array_alloc();
	if (g_values == NULL)
		return ;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (args[i][j] == '.')
				g_values[i][j] = 0;
			else
				g_values[i][j] = args[i][j] - 48;
			j++;
		}
		i++;
	}
}

void	init_fixed(char **args)
{
	int		i;
	int		j;

	g_fixed = array_alloc();
	if (g_fixed == NULL)
		return ;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (args[i][j] == '.')
				g_fixed[i][j] = 0;
			else
				g_fixed[i][j] = 1;
			j++;
		}
		i++;
	}
}
