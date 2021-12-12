/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:44:39 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/10 13:01:43 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_checkarg(char c, va_list argva, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(argva, int), len);
	if (c == '%')
		ft_putchar('%', len);
	if (c == 's')
		ft_putstr(va_arg(argva, char *), len);
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(argva, int), len);
	if (c == 'X')
		ft_puthexa_mayus(va_arg(argva, unsigned int), len);
	if (c == 'x')
		ft_puthexa_minus(va_arg(argva, unsigned int), len);
	if (c == 'p')
		ft_put_ptr(va_arg(argva, unsigned long long), len);
	if (c == 'u')
		ft_put_unsigned(va_arg(argva, unsigned int), len);
	if (c == 'b')
		ft_printf_bits(va_arg(argva, unsigned int), len);
}

int	ft_printf(const char *format, ...)
{
	va_list	argva;
	int		len;

	len = 0;
	va_start(argva, format);
	while (*format)
	{
		if (*format == '%')
			ft_checkarg(*++format, argva, &len);
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(argva);
	return (len);
}
