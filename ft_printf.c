/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:11:21 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/24 14:55:25 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	select_format(va_list arg, char *str, size_t count)
{
	if (*str == 'c')
		ft_pfchar(va_arg(arg, int), count);
	else if (*str == 's')
		ft_pfstr(va_arg(arg, char *), count);
	//if(*str == 'p')
	else if (*str == 'd' || *str == 'i')
		ft_pfnbr(va_arg(arg, int), count);
	else if (*str == 'u')
		ft_pfunsgn(va_arg(arg, unsigned int), count);
	else if (*str == 'x')
		ft_pfhex(va_arg(arg, unsigned int), 1, count);
	else if (*str == 'X')
		ft_pfhex(va_arg(arg, unsigned int), 2, count);
	else if (*str == '%')
		ft_pfchar('%', count);
}

int	printf(char const *str, ...)
{
	va_list	arg;
	size_t	count;

	va_start(arg, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str ++;
			select_format(arg, (char *) str, count);
		}
		else
			ft_pfchar(*str, count);
		str ++;
	}
	va_end(arg);
	return (count);
}
