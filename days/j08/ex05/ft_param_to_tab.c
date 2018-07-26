/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 16:08:09 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/23 20:09:45 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;

	tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[ac].str = 0;
	return (tab);
}
