/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:45:04 by asousa-f          #+#    #+#             */
/*   Updated: 2023/09/01 12:34:53 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putnbr(int nb);
int		ft_putnbr_u(unsigned int nb);
int		ft_puthex(unsigned long nb, const char c);
int		ft_putpointer(void *p);
char	*ft_itoa(int n);
char	*ft_itoa_u(unsigned int n);

#endif