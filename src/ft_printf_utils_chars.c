/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_chars.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:41:39 by asousa-f          #+#    #+#             */
/*   Updated: 2023/09/01 12:06:24 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (!str)
	{
		return (write(1, "(null)", 6));
	}
	while (str[i])
	{
		ft_putchar (str[i]);
		i++;
	}
	return (i);
}
