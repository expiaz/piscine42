/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 10:22:09 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/09 13:04:20 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_reverse(char *from, char *to, int pivot)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < pivot)
	{
		tmp = *from;
		*from = *to;
		*to = tmp;
		from++;
		to--;
		i++;
	}
}

void	*ft_strrev(char *str)
{
	int		len;
	char	*ptr;

	ptr = str;
	len = 0;
	while (*ptr)
	{
		ptr++;
		len++;
	}
	if (len < 2)
	{
		return (str);
	}
	ft_reverse(str, --ptr, len / 2);
	return (str);
}
