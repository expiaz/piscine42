# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    bon.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgidon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/03 13:35:58 by rgidon            #+#    #+#              #
#    Updated: 2018/07/03 13:36:16 by rgidon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

ldapsearch -Q sn | grep -i '^sn:.*bon.*' | wc -l | tr -d " "
