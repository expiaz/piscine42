/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:19:51 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/16 18:48:05 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		test_line(int board[], int x)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		if (i != x && board[i] == board[x])
			return (0);
		i++;
	}
	return (1);
}

int		test_diag(int board[], int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (board[i] > -1 &&
			(board[i] == board[x] - (x - i) || board[i] == board[x] + (x - i)))
			return (0);
		i++;
	}
	i = x + 1;
	while (i < 8)
	{
		if (board[i] > -1 &&
			(board[i] == board[x] - (x + i) || board[i] == board[x] + (x + i)))
			return (0);
		i++;
	}
	return (1);
}

void	find_y(int board[], int x)
{
	int		i;
	char	c;

	if (x >= 8)
	{
		i = 0;
		while (i < 8)
		{
			c = board[i] + 48 + 1;
			ft_putchar(c);
			i++;
		}
		ft_putchar('\n');
		return ;
	}
	board[x]++;
	while (board[x] < 8)
	{
		if (test_line(board, x) && test_diag(board, x))
			find_y(board, x + 1);
		board[x]++;
	}
	board[x] = -1;
	return ;
}

void	ft_eight_queens_puzzle_2(void)
{
	int		board[8];
	int		i;

	i = 0;
	while (i < 8)
	{
		board[i] = -1;
		i++;
	}
	find_y(board, 0);
}
