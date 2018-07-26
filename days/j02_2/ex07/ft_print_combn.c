/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:15:19 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/07 17:22:31 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int *numbers, int n)
{
	int i;

	i = -1;
	while (++i < n)
	{
		ft_putchar('0' + numbers[i]);
	}
	if (numbers[0] < 10 - n || numbers[n - 1] < 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_increment(int *numbers, int n)
{
	int i;

	numbers[n - 1]++;
	i = n;
	while (--i > 0)
	{
		if (numbers[i] > 9)
		{
			numbers[i] = 0;
			numbers[i - 1]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int numbers[9];
	int i;
	int print;

	i = -1;
	while (++i < n)
		numbers[i++] = 0;
	while (numbers[0] <= 9)
	{
		print = 1;
		i = -1;
		while (print && ++i < n - 1)
		{
			if (numbers[i] >= numbers[i + 1])
				print = 0;
		}
		if (print)
			ft_print(numbers, n);
		ft_increment(numbers, n);
	}
}
