/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adrss.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:46:27 by bael-bad          #+#    #+#             */
/*   Updated: 2024/11/23 23:50:07 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexadcmal(unsigned long nbr)
{
	char	*hexa;
	int		count;

	count = 0;
	hexa = "0123456789abcdef";
	if (nbr >= 16)
	{
		count += ft_hexadcmal(nbr / 16);
	}
	count += write(1, &hexa[nbr % 16], 1);
	return (count);
}

int	ft_put_adrss(void *adrss)
{
	int		count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_hexadcmal((unsigned long)adrss);
	return (count);
}
