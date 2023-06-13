/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <antonio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:54:22 by antonio           #+#    #+#             */
/*   Updated: 2023/06/12 16:04:52 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += ft_printstr("0x");
	count += ft_printhexa(ptr, 'x');
	return (count);
}

