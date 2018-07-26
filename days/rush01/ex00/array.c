/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thberrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:48:12 by thberrid          #+#    #+#             */
/*   Updated: 2018/07/15 14:30:38 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		**array_alloc(void)
{
	int		**array;
	int		i;
	int		j;

	array = (int **)malloc(sizeof(int *) * 9);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < 9)
	{
		array[i] = (int *)malloc(sizeof(int) * 9);
		if (array[i] == NULL)
			return (NULL);
		j = 0;
		while (j < 9)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}

void	array_free(int **array)
{
	int		i;

	if (array == NULL)
		return ;
	i = 0;
	while (i < 9)
	{
		free(array[i]);
		i++;
	}
	free(array);
	array = NULL;
}

int		**array_copy(int **array)
{
	int i;
	int j;
	int **copy;

	copy = array_alloc();
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			copy[i][j] = array[i][j];
			j++;
		}
		i++;
	}
	return (copy);
}

void	array_print(int **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(tab[i][j] + 48);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
