/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:30:52 by antonio           #+#    #+#             */
/*   Updated: 2023/06/13 13:22:16 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	cont;

	cont = 0;
	if (!str)
		return (ft_printstr("(null)"));
	while (str[cont])
	{
		ft_printchar(str[cont]);
		cont++;
	}
	return (cont);
}
