/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:35:15 by aessabir          #+#    #+#             */
/*   Updated: 2021/12/20 15:36:09 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_output(char c, va_list ptr)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ptr, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (c == 'p')
		return (ft_putadd(va_arg(ptr, void *)));
	else if (c == 'u')
		return (ft_unsigned(va_arg(ptr, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_hexa(c, va_arg(ptr, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar(c));
}

int	ft_printf(const char *format, ...)
{
	size_t		i;
	va_list		ptr;
	int			len;

	va_start(ptr, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && ++i)
			len += ft_output(format[i], ptr);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (len);
}
