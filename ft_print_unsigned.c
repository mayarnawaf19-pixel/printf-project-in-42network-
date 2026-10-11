/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:25:11 by mabani-h          #+#    #+#             */
/*   Updated: 2026/10/08 16:39:32 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int n, size_t *counter)
{
	char	c;

	if (n >= 10)
		ft_print_unsigned(n / 10, counter);
	c = '0' + (n % 10);
	write (1, &c, 1);
	(*counter)++;
}
