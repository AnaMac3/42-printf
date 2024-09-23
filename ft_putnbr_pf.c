/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:08:46 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/23 17:48:55 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	is_positive(int n, size_t count)
{
	int	n_temp;
	int	digit;
	int	divisor;

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

static void	is_negative(int n, size_t count)
{
	if (n == -2147483648)
		ft_putstr_pf("-2147483648", count);
	else if (n < 0)
	{
		ft_putchar_pf('-', count);
		n = -n;
		is_positive(n, count);
	}
}

void	ft_putnbr_pf(int n, size_t count)
{
	if (n < 0)
		is_negative(n, count);
	if (n == 0)
	{
		ft_putchar_pf('0', count);
		return ;
	}
	if (n > 0)
		is_positive(n, count);
}
