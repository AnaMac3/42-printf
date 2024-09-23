//#include "libftprintf.h"
#include <stdio.h>

int	main()
{
	//Prueba con c - char
	char	c = 'f';
	//ft_printf("Esto es un char: %c\n", c);
	printf("Prueba con printf original: %c\n", c);

	//Prueba con s - string
	char	*s = "string";
	//ft_printf("Esto es una string: %s\n", s);
	printf("Prueba con printf original: %s\n", s);

	//Prueba con p - puntero a hexadecimal
	void	*p = "9988";
	//ft_printf("Esto es una string: %s\n", s);
	printf("Prueba con printf original: %p\n", p);

	//Prueba con d - decimal
	void	*d = 998;
	//ft_printf("Esto es una string: %d\n", d);
	printf("Prueba con printf original: %d\n", d);

	//Prueba con i - entero
	void	*i = 665;
	//ft_printf("Esto es una string: %i\n", i);
	printf("Prueba con printf original: %i\n", i);

	//Prueba con u - entero sin signo
	void	*u = 4294967295;
	//ft_printf("Esto es una string: %u\n", u);
	printf("Prueba con printf original: %u\n", u);

	//Prueba con x - hexadecimal en minúscula
	void	*x = 255;
	//ft_printf("Esto es una string: %x\n", x);
	printf("Prueba con printf original: %x\n", x);

	//Prueba con X - hexadecimal en mayúscula
	void	*X = 255;
	//ft_printf("Esto es una string: %X\n", X);
	printf("Prueba con printf original: %X\n", X);
}
