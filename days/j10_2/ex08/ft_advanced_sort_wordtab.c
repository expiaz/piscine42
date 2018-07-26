/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 20:04:36 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 22:19:22 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		sorted;
	char	*tmp;

	i = 0;
	while (tab[i])
		i++;
	sorted = 0;
	while (sorted == 0)
	{
		sorted = 1;
		j = -1;
		while (++j < i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
				sorted = 0;
			}
		}
		i--;
	}
}
