/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:19:51 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/16 18:48:45 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		find_y(int board[], int x)
{
	int		solved;

	if (x >= 8)
	{
		return (1);
	}
	solved = 0;
	board[x]++;
	while (board[x] < 8)
	{
		if (test_line(board, x) && test_diag(board, x))
			solved += find_y(board, x + 1);
		board[x]++;
	}
	board[x] = -1;
	return (solved);
}

int		ft_eight_queens_puzzle(void)
{
	int		solved;
	int		board[8];
	int		i;

	i = 0;
	while (i < 8)
	{
		board[i] = -1;
		i++;
	}
	return (find_y(board, 0));
}
