/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:16:26 by antonio           #+#    #+#             */
/*   Updated: 2023/06/13 13:22:41 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int uns)
{
	int	cont;

	cont = 0;
	if (uns >= 10)
	{
		cont += ft_printunsigned(uns / 10);
	}
	ft_printchar(uns % 10 + '0');
	cont++;
	return (cont);
}
