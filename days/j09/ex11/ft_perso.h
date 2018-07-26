/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:47:31 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/13 13:46:15 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <strings.h>

# define SAVE_THE_WORLD "james bond bitches"

typedef struct	s_perso {
	char	*name;
	int		life;
	int		age;
	char	*profession;
}				t_perso;

#endif
