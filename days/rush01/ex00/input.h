/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thberrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 22:50:54 by thberrid          #+#    #+#             */
/*   Updated: 2018/07/15 13:38:26 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
# define INPUT_H

# include "shared.h"
# include "array.h"

t_bool	sanitize_input(int nb_args, char **args);
void	init_values(char **args);
void	init_fixed(char **args);

#endif
