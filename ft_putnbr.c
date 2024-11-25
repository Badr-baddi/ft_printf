/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:15:51 by bael-bad          #+#    #+#             */
/*   Updated: 2024/11/23 23:50:19 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printnbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 10)
	{
		count += ft_putchar(nbr + '0');
	}
	if (nbr > 9)
	{
		count += ft_printnbr(nbr / 10);
		count += ft_printnbr(nbr % 10);
	}
	return (count);
}

int	ft_putnbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		count += ft_printnbr(nbr);
	}
	else if (nbr <= 9)
		count += ft_putchar(nbr + '0');
	return (count);
}
