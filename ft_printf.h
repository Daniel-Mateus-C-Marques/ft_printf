/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 21:42:11 by danicamp          #+#    #+#             */
/*   Updated: 2026/05/06 19:59:11 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int			ft_printf(const char *format, ...);
int			ft_putstr(const char *display);
int			ft_putchar(const char c);
int			ft_putnbr(int n);
int			ft_unsigned(unsigned int n);
int			ft_pointer(unsigned long n, const char *base);
int			ft_print_hex(unsigned int n, const char *base);
int			ft_pointer_hex(unsigned long n, const char *base);

#endif