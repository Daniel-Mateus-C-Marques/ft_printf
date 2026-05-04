/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:35:38 by danicamp          #+#    #+#             */
/*   Updated: 2026/05/04 17:38:22 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("Tamanho da string: %d\n", ft_printf("Número: %u\n", -42));
	printf("Tamanho da string: %d\n", printf("Número: %u\n", -42));
}
