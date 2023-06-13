/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <antonio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:45:41 by antonio           #+#    #+#             */
/*   Updated: 2023/06/13 12:07:08 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_filter(char const *content, int i, va_list *args) 
{
	int	filter_print;

	filter_print = 0;
	if (content[i] == 'c')
		filter_print += ft_printchar(va_arg(*args, int)); 
	if (content[i] == 's')
		filter_print += ft_printstr(va_arg(*args, char *));
	if (content[i] == '%')
		filter_print += ft_printchar('%');
	if (content[i] == 'x' || content[i] == 'X')
		filter_print += ft_printhexa(va_arg(*args, unsigned int), content[i]);
	if (content[i] == 'p')
		filter_print += ft_printptr(va_arg(*args, unsigned long long));
	if (content[i] == 'd')
		filter_print += ft_printdec(va_arg(*args, int));
	if (content[i] == 'i')
		filter_print += ft_printdec(va_arg(*args, int));
	if (content[i] == 'u')
		filter_print += ft_printunsigned(va_arg(*args, unsigned int));
	return (filter_print);
}

int	ft_printf(char const *content, ...)
{
	va_list	args;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(args, content);
	while (content[i])
	{
		if (content[i] != '%')
			c += ft_printchar(content[i]);
		else
		{
			i++;
			c += ft_filter(content, i, &args);
		}
		i++;
	}
	va_end(args);
	return (c);
}

/*int	main(void)
{
	ft_printf("hola %c %s %d %i %u %x %X %p %%\n", 'a', "mundo", 2147483647, 2147483647, 4294967295, 0x4AABF73, 0x4aabf73, "hola");
}
*/