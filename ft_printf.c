/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:28:29 by bael-bad          #+#    #+#             */
/*   Updated: 2024/11/23 23:50:00 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check(const char *format, va_list list)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(list, int));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (*format == 'u')
		count += ft_unsigned_nb(va_arg(list, unsigned int));
	else if (*format == 'x' || *format == 'X')
		count += ft_hexadcm(va_arg(list, unsigned int), *format);
	else if (*format == 'p')
		count += ft_put_adrss(va_arg(list, void *));
	else if (*format == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(*format);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	list;

	va_start(list, format);
	count = 0;
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%' && format[i])
			count += write(1, &format[i++], 1);
		else if (format[i] == '%' && format[i + 1])
		{
			count += check(&format[i + 1], list);
			i += 2;
		}
		else
			i++;
	}
	va_end(list);
	return (count);
}
