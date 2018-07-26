/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:10:33 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/22 18:18:41 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_H
# define FT_PARSE_H

# include <stdlib.h>
# include "ft_strings.h"

typedef struct		s_data
{
	char	*top;
	char	*bot;
	char	*mid;
	int		height;
	int		width;
}					t_data;

t_data				*init_data(void);
int					stdin_size(char *str, t_data *data);
int					parse_stdin(char *str, t_data *data);

#endif
