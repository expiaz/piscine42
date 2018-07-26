/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_detect.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salquier <salquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:07:38 by salquier          #+#    #+#             */
/*   Updated: 2018/07/22 18:13:48 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE_H
# define FT_COLLE_H

# include <stdlib.h>
# include "ft_parse.h"

typedef struct		s_colle
{
	char			tl;
	char			tm;
	char			tr;
	char			ml;
	char			mm;
	char			mr;
	char			bl;
	char			bm;
	char			br;
}					t_colle;

int					is_colle(t_data *data, t_colle *c);
int					is_colle00(t_data *data);
int					is_colle01(t_data *data);
int					is_colle02(t_data *data);
int					is_colle03(t_data *data);
int					is_colle04(t_data *data);

#endif
