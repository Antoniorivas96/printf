/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <antonio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:36:25 by antonio           #+#    #+#             */
/*   Updated: 2023/06/13 12:26:28 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long long n, char c)
{
	unsigned long long	count;

	count = 0;
	if (n >= 16)
		count += ft_printhexa(n / 16, c);
	if (c == 'x')
		ft_printchar("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		ft_printchar("0123456789ABCDEF"[n % 16]);
	count++;
	return (count);
}
