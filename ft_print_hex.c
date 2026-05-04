/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:52:27 by danicamp          #+#    #+#             */
/*   Updated: 2026/05/04 18:24:57 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, const char *base)
{
	int     len;

	len = 0;
	if (n > 16)
		len += ft_print_hex(n / 16, base);
	n %= 16;
	write(1, &base[n], 1);
	return (len++);
}

int	ft_pointer_hex(unsigned long n, const char *base)
{
	int     len;

	len = 0;
	if (n > 16)
		len += ft_print_hex(n / 16, base);
	write(1, &base[n], 1);
	return (len++);
}
