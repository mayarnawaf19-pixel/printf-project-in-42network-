/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:24:14 by mabani-h          #+#    #+#             */
/*   Updated: 2026/10/11 08:00:24 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hex(unsigned long n, size_t *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16, count);
	write (1, &hex[n % 16], 1);
	(*count)++;
}

void	ft_print_pointer(void *p, size_t *count)
{
	unsigned long	address;

	if (p == NULL)
	{
		write(1, "(nil)", 5);
		*count += 5;
		return ;
	}
	write (1, "0x", 2);
	*count += 2;
	address = (unsigned long) p;
	print_hex(address, count);
}
