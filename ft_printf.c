/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:29:52 by mabani-h          #+#    #+#             */
/*   Updated: 2026/10/11 08:25:53 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_print_pointer(va_arg(va, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_print_unsigned(va_arg(va, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		ft_print_hex(va_arg(va, unsigned int), (*str == 'X'), counter);
	}
	else if (*str == '%')
		ft_print_percent(counter);
}

int	ft_printf(char const *str, ...)
{
	va_list	va;
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str)
				ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}
