/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 18:24:23 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/19 19:01:26 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# define OPERATORS	5
# define ADD		'+'
# define SUB		'-'
# define MUL		'*'
# define DIV		'/'
# define MOD		'%'

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

#endif
