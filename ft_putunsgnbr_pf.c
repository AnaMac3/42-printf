/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsgnbr_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:10:44 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/23 17:15:43 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunsgnbr_pf(unsigned int n, size_t count)
{
	unsigned int	n_temp;
	unsigned int	divisor;
	int				digit;

	n_temp = n;
	divisor = 1;
	while (n_temp > 9)
	{
		n_temp /= 10;
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		ft_putchar_pf(digit + '0', count);
		divisor /= 10;
	}
}
