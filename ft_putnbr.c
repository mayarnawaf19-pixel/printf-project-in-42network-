/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 14:28:48 by mabani-h          #+#    #+#             */
/*   Updated: 2026/10/10 14:30:08 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, size_t *counter)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", counter);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', counter);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10, counter);
	ft_putchar((n % 10) + '0', counter);
}
