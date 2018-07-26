/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-ram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 15:09:19 by ede-ram           #+#    #+#             */
/*   Updated: 2018/07/15 15:09:20 by ede-ram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGIC_H
# define LOGIC_H

# include "shared.h"
# include "array.h"

t_bool	test_line(int x, int y);
t_bool	test_column(int x, int y);
t_bool	test_square(int x, int y);
t_bool	find_next(int *x, int *y);
t_bool	solve_cell(int x, int y);

#endif
