/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:41:00 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/11 12:11:47 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_dgrt(int nb)
{
	int		digital_root;
	int		tmp;

	digital_root = nb;
	while (digital_root / 10 > 0)
	{
		tmp = digital_root % 10;
		digital_root /= 10;
		digital_root += tmp;
	}
	return (digital_root);
}

int		binary_search(int nb)
{
	int		start;
	int		end;
	int		mid;

	start = 0;
	end = nb / 2;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (start);
}

int		ft_sqrt(int nb)
{
	int		units;
	int		dr;

	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	units = nb % 10;
	if (units == 2 || units == 3 || units == 7 || units == 8)
	{
		return (0);
	}
	dr = ft_dgrt(nb);
	if (dr != 1 && dr != 4 && dr != 7 && dr != 9)
	{
		return (0);
	}
	return (binary_search(nb));
}
