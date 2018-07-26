/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:37:44 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/13 12:02:45 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *a, char *b)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (a[i] == ' ')
		i++;
	while (a[i] && b[j] && a[i] == b[j])
	{
		i++;
		j++;
	}
	while (a[i] == ' ')
		i++;
	return (a[i] - b[j]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		done;
	char	*bans[3];

	bans[0] = "president";
	bans[1] = "attack";
	bans[2] = "Bauer";
	i = 1;
	done = 0;
	while (!done && i < argc)
	{
		j = -1;
		while (!done && ++j < 3)
			if (ft_strcmp(argv[i], bans[j]) == 0)
				done = 1;
		i++;
	}
	if (done)
		write(1, "Alert!!!\n", 9);
	return (0);
}
