h                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleffad <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/03 00:04:48 by gleffad           #+#    #+#              #
#    Updated: 2018/07/03 00:15:34 by gleffad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

if  [ ! $# -eq 1 ]
then
	for i in seq {0..41}
	do
		echo "merci d'ecrire uid de l'etudiant que tu cherche en unique argument."
	done
	exit 1
fi

ldapsearch uid="$1" | sed 's/^jpeg.*$//' | grep -E "^[^ ]"i
