/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:52:27 by danicamp          #+#    #+#             */
/*   Updated: 2026/05/05 21:42:27 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, const char *base)
{
	int	len;
	int	index_base;

	len = 0;
	index_base = 0;
	if (n >= 16)
		len += ft_pointer_hex(n / 16, base);
	index_base = n % 16;
	write(1, &base[index_base], 1);
	len++;
	return (len);
}

int	ft_pointer_hex(unsigned long n, const char *base)
{
	int	len;
	int	index_base;

	len = 0;
	index_base = 0;
	if (n >= 16)
		len += ft_pointer_hex(n / 16, base);
	index_base = n % 16;
	write(1, &base[index_base], 1);
	len++;
	return (len);
}
