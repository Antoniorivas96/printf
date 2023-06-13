/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <antonio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:12:54 by antonio           #+#    #+#             */
/*   Updated: 2023/06/13 11:43:13 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printchar(char c);
int	ft_printf(char const *content, ...);
int	ft_printstr(char *str);
int	ft_printhexa(unsigned long long n, char c);
int	ft_printptr(unsigned long long ptr);
int	ft_putchar(char c);
int	ft_printdec(int	n);
int	ft_printunsigned(unsigned int uns);

#endif