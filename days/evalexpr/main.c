/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:14:09 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/22 23:34:38 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_level(char token)
{
	if (token == '+' || token == '-')
		return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int		number;
	int		sign;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = *str == '-' ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * sign);
}

char	get_op(char **str)
{
	char	o;

	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	o = **str;
	(*str)++;
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	return (o);
}

typedef int	(*handler)(int, int);

int		add(int a, int b)
{
	return (a + b);
}

int		sub(int a, int b)
{
	return (a - b);
}

int		mul(int a, int b)
{
	return (a * b);
}

int		div(int a, int b)
{
	return (a / b);
}

int		mod(int a, int b)
{
	return (a % b);
}

handler	get_handler(char c)
{
	if (c == '+')
		return &add;
	if (c == '-')
		return &sub;
	if (c == '*')
		return &mul;
	if (c == '/')
		return &div;
	if (c == '%')
		return &mod;
	return &add;
}

int		is_op(char c)
{
	return (c == '-' || c == '+' || c == '*' || c == '/' || c == '%');
}

int		parse(char *str)
{
	int		i;
	int		op;
	handler	h;

	i = 0;
	while (str[i] == '(')
		str++;
	op = -1;
	while (str[i])
	{
		if (is_op(str[i]) && (op == -1 || get_level(str[i]) < get_level(str[op])))
			op = i;
		i++;
		if (str[i] == '(' || str[i] == ')')
		{
			op = str[i] == '(' ? i - 1 : i + 1;
			str[i] = '\0';
			break;
		}
`	}

	char *s = strdup(str);
	
	if (op == -1)
	{
		i = ft_atoi(str);
		printf("%s = %d\n", s, i);
		return (i);
	}
	
	h = get_handler(str[op]);
	str[op] = '\0';
	i = h(parse(str), parse(str + op + 1));
	
	printf("%s = %d\n", s, i);
	
	return (i);
}

int		main(int argc, char **argv)
{
	printf("%d\n", parse(argv[1]));
	return (0);
}
