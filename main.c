/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:35:38 by danicamp          #+#    #+#             */
/*   Updated: 2026/05/05 21:35:19 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{	
	printf("Tamanho da string: %d\n", ft_printf("Número: %x\n", 16));
	printf("Tamanho da string: %d\n", printf("Número: %x\n", 16));
}
