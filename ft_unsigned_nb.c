/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_nb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:01:50 by bael-bad          #+#    #+#             */
/*   Updated: 2024/11/23 23:50:31 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printnbr(unsigned int nbr)
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

int	ft_unsigned_nb(unsigned int nbr)
{
	int	count;

	count = 0;
	count += ft_printnbr(nbr);
	return (count);
}
