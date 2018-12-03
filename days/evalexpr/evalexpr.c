#include "stdio.h"

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

int		(*get_operator(char operator))(int, int)
{
	switch (operator)
	{
		case '+':	return (&add);
		case '-':	return (&sub);
		case '*':	return (&mul);
		case '/':	return (&div);
		default:	return (&add);
	}
}

int		ft_atoi(char **str)
{
	int		number;
	int		sign;

	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	sign = **str == '-' ? -1 : 1;
	if (**str == '-' || **str == '+')
		(*str)++;
	number = 0;
	while (**str >= '0' && **str <= '9')
	{
		number = number * 10 + (**str - '0');
		(*str)++;
	}
	return (number * sign);
}

int		evalexpr(char **input, int operande, char operator)
{
	char	token;
	char	next_operator;
	int		next_operande;

	while (**input != '\0')
	{
		// parse next operande
		token = **input;
		if (token != '\0')
		{
			if (token == '(')
			{
				(*input)++;
				next_operande = evalexpr(input, 1, '*');
			}
			else
			{
				next_operande = ft_atoi(input);
			}
		}

		token = **input;
		if (token != '\0')
		{
			(*input)++;
			if (token == ')')
			{
				operande = get_operator(operator)(operande, next_operande);
				break;
			}

			next_operator = token;
			if ((operator == '+' || operator == '-') &&
				(next_operator == '*' || next_operator == '/'))
			{
				next_operande = evalexpr(input, next_operande, next_operator);
				
				if (**input != '\0')
				{
					next_operator = **input;
					(*input)++;
				}
			}
		}

		operande = get_operator(operator)(operande, next_operande);
		operator = next_operator;
	}

	return (operande);
}

int		main(int argc, char **argv)
{
	printf("%d\n", evalexpr(&argv[1], 1, '*'));
	return (0);
}
