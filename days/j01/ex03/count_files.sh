# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgidon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/03 09:47:57 by rgidon            #+#    #+#              #
#    Updated: 2018/07/03 13:21:27 by rgidon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

find . -type fd -name ".*" -or -name "*" | wc -l | tr -d " "
