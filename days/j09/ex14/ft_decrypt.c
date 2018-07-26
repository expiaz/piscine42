/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:04:20 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/13 15:42:56 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_perso.h>

t_perso		**ft_decrypt(char *str)
{
	int		i;
	int		n;
	t_perso	**persos;
	t_perso	*perso;

	n = 1;
	while (str[i])
	{
		if (str[i] == '|')
			n++;
		i++;
	}
	persos = malloc(sizeof(*persos) * n);
	i = 0;
	while (str[i])
	{
		if (!i || str[i] == '|')
		{
			i++;
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] == 'A' && str[i] == 'Z'))
			{
				j = 0;
				while (str[i + j] != ';' && str[i + j] != '|')
					j++;
				perso->name = malloc(sizeof(char) * j + 1);
				perso->name[j] = '\0';
				while (--j >= 0)
					perso[j] = str[i + j];
				i += j;
			}
			if (str[i] >= '0' && str[i] <= '9')
			{
				while (str[i] != ';' && str[i] != '|')
				{
					perso->age = perso->age * 10 + (str[i] - 48);
					i++;
				}
			}
			persos[--n] = perso;
		}
		else
			i++;
	}
}
