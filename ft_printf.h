/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:24:36 by mabani-h          #+#    #+#             */
/*   Updated: 2026/10/10 14:24:41 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, size_t *counter);
void	ft_putstr(char *s, size_t *counter);
void	ft_putnbr(int n, size_t *counter);
void	ft_print_unsigned(unsigned int n, size_t *counter);
void	ft_print_hex(unsigned int n, int uppercase, size_t *count);
void	ft_print_pointer(void *p, size_t *count);
void	ft_print_percent(size_t *counter);

#endif
