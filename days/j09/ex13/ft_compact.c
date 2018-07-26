/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:54:09 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/13 13:02:12 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		i;
	int		j;
	int		len;

	len = length;
	i = 0;
	while (i < len)
	{
		if (tab[i][0] == '\0')
		{
			len -= 1;
			j = i;
			while (j < len)
			{
				tab[j] = tab[j + 1];
				j++;
			}
		}
		else
			i++;
	}
	return (len);
}
