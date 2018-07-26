/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salquier <salquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:14:21 by salquier          #+#    #+#             */
/*   Updated: 2018/07/22 18:14:08 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <unistd.h>
# include "ft_parse.h"

void	print_result(int colle, t_data *data);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

#endif
