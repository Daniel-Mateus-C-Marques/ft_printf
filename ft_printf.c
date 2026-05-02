/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 21:40:49 by danicamp          #+#    #+#             */
/*   Updated: 2026/05/02 16:11:04 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	parse(va_list args, const char *format)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (format[i])
	{
		if(format[i] == '%')
		{
			i++;
			if (format[i] == 's')
				len += ft_putstr(va_arg(args, const char *));
			else if (format[i] == 'c')
				len += ft_putchar(va_arg(args, int));
			else if (format[i] == '%')
				len += ft_putchar('%');
			i++;
		}
		else
		{
			len += ft_putchar(format[i]);
			i++;
		}
	}
	return (len);
}


int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;	
	va_start(args, format);

	len = 0;
	if (!format)
		return (ft_putstr("NULL"), 0);
	len += parse(args, format);
	return(len);
}