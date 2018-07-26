/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thberrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:46:22 by thberrid          #+#    #+#             */
/*   Updated: 2018/07/15 14:03:17 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
int		**array_alloc(void);
void	array_free(int **array);
int		**array_copy(int **array);
void	array_print(int **array);

#endif
