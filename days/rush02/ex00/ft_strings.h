/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 16:58:41 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/22 19:23:34 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H

# include <stdlib.h>

int		ft_strlen(char *str);
int		ft_stridx(char *str, char c, int i);
int		ft_strcmp(char *a, char *b);

void	ft_strncpy(char *dest, char *src, int n);
void	ft_strncat(char *dest, char *src, int n);
char	*ft_strdup(char *str);

#endif
