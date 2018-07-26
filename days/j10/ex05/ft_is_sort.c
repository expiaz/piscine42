/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:48:48 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 21:18:50 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	if (length < 2)
		return (1);
	i = 0;
	while (i < length - 1 && tab[i] == tab[i + 1])
		i++;
	if (i < length - 1 && tab[i] < tab[i + 1])
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	else if (i < length - 1 && tab[i] > tab[i + 1])
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	return (1);
}
