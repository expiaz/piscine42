/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:32:08 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/25 22:32:10 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include <stdlib.h>
# include <unistd.h>
# include "shared.h"
# include "parse.h"

int		ft_print_by_line(int **grid, t_header *h, t_answer *a);

#endif
