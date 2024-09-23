/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:57:59 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/23 16:26:21 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	format(va_list arg, char *str, size_t count)
{
	/*
	%c --> ft_putchar_pf
	%s --> ft_putstr_pf
	%p --> el argumento es un puntero void * y lo imprime en hexadecimal
	%d : imprime un número decimal (base 10) --> putnbr con comas??
	%i --> putnbr
	%u : imprime un número decimal (base 10) sin signo.
	%x : imprime un número hexadecimal (base 16) en minúscula.
	%X : imprime un número hexadecimal (base 16) en mayúscula.
	%% : imprime el símbolo del porcentaje. */
}

int	ft_printf(char const *str, ...);
{
	va_list	arg; //declarar lista de argumentos
	va_start(arg, str); //inicializarla
	int	count; //para contar el número de caracteres impresos (??)

	count = 0;
	while (*str)
	{
		if (*str == '%')
		{ //si encontramos un especificador
			str ++; //saltamos al siguiente caracter
			select_format(arg, (char *) str, count); //y llamamos a otra función con argumentos: 
			   //arg, (char *) str, count supongo que para que
			   //procese el caracter que viene después,
			   //que es el que indica cómo tiene que tratar el siguiente 
			   //argumento (en qué formato imprimir, si int, str, etc)
			   //Le pasamos el argumento de la lista en el que estamos,
			   //el caracter, y el count. 
			   //va_arg(args, tipo) --> salta al siguiente argumento,
			   //va en orden, si antes ha saltado al segundo argumento,
			   //la siguiente vez saltará al tercero, etc.
		}
		else
		{
			ft_putchar(*str, count) /*si estamos en un caracter normal,
			               que no es ni % ni la letra que va después, 
						   hacemos putchar. 
						   El count hace referencia a la cantidad de
						   caracteres que se imprimen. El count ++
						   tendrá que ir en las funciones que impriman
						   segun el formato especificado (putchar, etc)*/
		}
		str ++; //pasamos al siguiente caracter
	}
	va_end(arg); //finalizamos el uso de la lista
	return (count); //devolvemos el número total de caracteres impresos
}