/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:54:48 by rgidon            #+#    #+#             */
/*   Updated: 2018/07/18 19:00:16 by rgidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_base(unsigned char nb, char *base, int size, int digits)
{
	if (--digits)
		ft_putnbr_base(nb / size, base, size, digits);
	ft_putchar(base[nb % size]);
}

void	ft_print_line(unsigned char *ptr, unsigned int size, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (j < 16 && i + j < size)
	{
		ft_putnbr_base(ptr[i + j], "0123456789abcdef", 16, 2);
		if (++j % 2 == 0)
			ft_putchar(' ');
	}
	j = 40 - (j / 2 + j * 2);
	while (1)
	{
		ft_putchar(' ');
		if (j-- == 0)
			break ;
	}
	j = 0;
	while (j < 16 && i + j < size)
	{
		ft_putchar(ptr[i + j] > 31 && ptr[i + j] < 127 ? ptr[i + j] : '.');
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = addr;
	i = 0;
	while (i < size)
	{
		ft_putnbr_base(i, "0123456789abcdef", 16, 8);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_line(ptr, size, i);
		i += 16;
		ft_putchar('\n');
	}
	return (addr);
}
