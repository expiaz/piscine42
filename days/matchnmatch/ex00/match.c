/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 15:45:39 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/15 12:28:30 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char	*s1, char *s2)
{
	int		i;
	int		j;
	char	next;

	i = 0;
	j = 0;	
	while (s2[j])
	{
		s
		if (s2[j] == '*')
		{
			while (s2[j] == '*')
				j++;
			while (s1[i] && s1[i] != s2[j])
				i++;
		}
		while (s1[i] && s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (s1[i] == '\0')
			return (0);
		if (s1[i] != s2[j])
			return (match(&s1[i], s2));
	}
	return (1);
}

int		main(int argc, char ** argv)
{
	printf("%d\n", match(argv[1], argv[2]));
	return (0);
}
