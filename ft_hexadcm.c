/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadcm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:06:32 by bael-bad          #+#    #+#             */
/*   Updated: 2024/11/23 23:49:56 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadcm(unsigned int nbr, char x)
{
	char	*hexa;
	int		count;

	count = 0;
	hexa = "0123456789abcdef";
	if (x == 'X')
		hexa = "0123456789ABCDEF";
	if (nbr >= 16)
		count += ft_hexadcm(nbr / 16, x);
	count += write(1, &hexa[nbr % 16], 1);
	return (count);
}
