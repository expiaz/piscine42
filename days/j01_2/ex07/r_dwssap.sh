# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgidon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/03 13:29:50 by rgidon            #+#    #+#              #
#    Updated: 2018/07/04 13:20:24 by rgidon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | sed -n ${FT_LINE1},${FT_LINE2}p | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' -e 's/$/./' | tr -d '\n'
