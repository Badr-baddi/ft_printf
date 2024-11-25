/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:27:27 by bael-bad          #+#    #+#             */
/*   Updated: 2024/11/23 23:51:48 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_unsigned_nb(unsigned int nbr);
int	ft_hexadcm(unsigned int nbr, char x);
int	ft_put_adrss(void *adrss);
#endif
