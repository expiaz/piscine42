/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:24:18 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/17 22:03:45 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (--argc)
	{
		i = 0;
		while (argv[argc][i])
		{
			ft_putchar(argv[argc][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
