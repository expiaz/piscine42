/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:07:29 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/22 18:10:42 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INPUT_H
# define FT_INPUT_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "ft_strings.h"

# define CHUNK 255

char	*get_stdin(void);

#endif
