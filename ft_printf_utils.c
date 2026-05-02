/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 22:08:52 by danicamp          #+#    #+#             */
/*   Updated: 2026/05/02 21:36:01 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *display)
{
	int	i;

	i = 0;
	while (display[i])
	{
		write(1, &display[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	long int	nb;
	int			len;
	char		number;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		len++;
	}
	if (nb > 9)
	{
		len += ft_putnbr(nb / 10);
		nb %= 10;
	}
	len++;
	number = nb + '0';
	write(1, &number, 1);
	return (len);
}
