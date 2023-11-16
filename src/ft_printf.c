/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:51:19 by asousa-f          #+#    #+#             */
/*   Updated: 2023/09/01 12:14:36 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_format(char format, va_list args)
{
	int	i;

	i = 0;
	if (format == '%')
		i += ft_putchar('%');
	else if (format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		i += ft_putnbr_u(va_arg(args, unsigned int));
	else if (format == 'x')
		i += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == 'X')
		i += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		i += ft_putpointer(va_arg(args, void *));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	va_start(args, format);
	i = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			i += ft_print_format(*(++format), args);
		else
			i += write(1, format, 1);
		++format;
	}
	va_end(args);
	return (i);
}
/*
int main()
{
	unsigned int f;
	void *pointer_to_main = (void*) main;
	
	
	
	f = 3454545884;
	
	ft_printf("%%\n");
	printf("%%\n");
	printf("--------------------------------------\n");
	ft_printf("%c\n", 'F');
	printf("%c\n", 'F');
	printf("--------------------------------------\n");
	ft_printf("%s\n", "ola");
	printf("%s\n", "ola");
	printf("--------------------------------------\n");
	ft_printf("%d + %i\n", 10, 4);
	printf("%d + %i\n", 10, 4);
	printf("--------------------------------------\n");
	ft_printf("%u\n", f);
	printf("%u\n", f);
	printf("--------------------------------------\n");
	ft_printf("%x\n", 'a');
	printf("%x\n", 'a');
	printf("--------------------------------------\n");
	ft_printf("%X\n", 'A');
	printf("%X\n", 'A');
	printf("--------------------------------------\n");
	ft_printf("%p\n", pointer_to_main);
	printf("%p\n", pointer_to_main);
	printf("--------------------------------------\n");
	return (0);
}*/