/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 20:04:36 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/26 21:25:58 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i])
		i++;
	while (sorted == 0)
	{
		sorted = 1;
		j = 0;
		while (j < i - 1)
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
			
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
				sorted = 0;
			}
		i--;
	}
}
