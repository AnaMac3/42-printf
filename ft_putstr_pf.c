/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:50:32 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/23 17:50:10 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	t_putstr_pf(char *s, size_t count)
{
	unsigned int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i ++;
		count ++;
	}
}
