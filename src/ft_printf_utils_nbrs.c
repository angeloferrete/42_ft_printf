/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_nbrs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:52:28 by asousa-f          #+#    #+#             */
/*   Updated: 2023/09/01 12:31:14 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr(int nb)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa(nb);
	i = ft_putstr(str);
	free(str);
	return (i);
}

int	ft_putnbr_u(unsigned int nb)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa_u(nb);
	i = ft_putstr(str);
	free(str);
	return (i);
}

int	ft_puthex(unsigned long nb, const char c)
{
	char	*base;
	int		i;

	i = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		i += ft_puthex((nb / 16), c);
		i += ft_puthex((nb % 16), c);
	}
	else
		i += write(1, &base[nb], 1);
	return (i);
}

int	ft_putpointer(void *p)
{
	int	i;

	i = 0;
	if (!p)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_puthex((unsigned long)p, 'x');
	return (i);
}
