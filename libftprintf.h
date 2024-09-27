/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:54:22 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/25 10:37:30 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(char const *str, ...);
void	ft_pfchar(char c, size_t *count);
void	ft_pfstr(char *s, size_t *count);
void	ft_pfnbr(int n, size_t *count);
void	ft_pfunsgn(unsigned int n, size_t *count);
void	ft_pfhex(unsigned int n, int mode, size_t *count);
void	ft_pfptrhex(void *p, size_t *count);

#endif