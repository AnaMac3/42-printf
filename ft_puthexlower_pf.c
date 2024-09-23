/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:25:32 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/23 17:47:18 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stddef.h>

void	ft_putchar_pf(char c, size_t count);

void	ft_puthexlower_pf(unsigned int n, size_t count)
{
	unsigned int	n_temp;
	unsigned int	divisor;
	int				digit;
	char			*hex_base;

	n_temp = n;
	divisor = 1;
	while (n_temp > 15)
	{
		n_temp /= 16;
		divisor *= 16;
	}
	hex_base = "0123456789abcdef";
	while (divisor > 0)
	{
		digit = (n / divisor) % 16;
		ft_putchar_pf(hex_base[digit], count);
		divisor /= 16;
	}
}
