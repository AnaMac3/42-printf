/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:54:22 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/23 17:44:54 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int	ft_printf(char const *, ...);
void    ft_putchar_pf(char c, size_t count);
void	ft_putstr_pf(char *s, size_t count);
void	ft_putnbr_pf(int n, size_t count);
void    ft_putunsgnbr_pf(unsigned int n, size_t count);
void    ft_puthexlower_pf(unsigned int n, size_t count);

#endif