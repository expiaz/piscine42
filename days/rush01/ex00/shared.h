/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:47:42 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/15 15:09:09 by ede-ram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHARED_H
# define SHARED_H

# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

typedef int	t_bool;

int		**g_values;
int		**g_fixed;
int		**g_copy;

void	ft_clear(void);

#endif
