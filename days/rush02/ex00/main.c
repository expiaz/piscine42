/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salquier <salquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:09:52 by salquier          #+#    #+#             */
/*   Updated: 2018/07/22 19:10:13 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parse.h"
#include "ft_input.h"
#include "ft_print.h"
#include "ft_colle.h"

int		print_soluces(t_data *data)
{
	int		(*colle[5])(t_data *data);
	int		soluces[5];
	int		i;
	int		n;

	colle[0] = &is_colle00;
	colle[1] = &is_colle01;
	colle[2] = &is_colle02;
	colle[3] = &is_colle03;
	colle[4] = &is_colle04;
	i = -1;
	n = 0;
	while (++i < 5)
		if ((*colle[i])(data))
			soluces[n++] = i;
	i = -1;
	while (++i < n)
	{
		print_result(soluces[i], data);
		if (i < n - 1)
			ft_putstr(" || ");
	}
	return (n > 0);
}

void	ft_free(char *str, t_data *data)
{
	if (str != NULL)
		free(str);
	if (data != NULL)
		free(data);
}

int		main(void)
{
	char	*str;
	t_data	*data;

	data = init_data();
	str = get_stdin();
	if (data == NULL || str == NULL ||
		!stdin_size(str, data) || !parse_stdin(str, data) ||
		data->width == 0 || data->height == 0 ||
		!print_soluces(data))
		ft_putstr("aucune");
	ft_putchar('\n');
	ft_free(str, data);
	return (0);
}
