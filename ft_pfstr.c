/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:46:38 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/27 10:45:22 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_pfstr(char *s, size_t *count)
{
	int		i;
	char	*null_str;

	null_str = "(null)";
	if (s == NULL)
	{
		while (*null_str != '\0')
		{
			ft_pfchar(*null_str, count);
			null_str ++;
		}
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		ft_pfchar(s[i], count);
		i ++;
	}
}
