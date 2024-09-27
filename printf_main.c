#include "libftprintf.h"
#include <stdio.h>

int	main()
{
	//Prueba con c - char
	char	c = 'f';
	size_t r1 =ft_printf("Esto es un char: %c\n", c);
	ft_printf("Núm de caracteres: %u\n", r1);
	//Prueba con función original
	size_t r2 =printf("Esto es un char: %c\n", c);
	printf("Núm de caracteres: %zu\n\n", r2);

	char	c2 = '\0';
	size_t r3 =ft_printf("Esto es un char, carácter nulo: %c\n", c2);
	ft_printf("Núm de caracteres: %u\n", r3);
	//Prueba con función original
	size_t r4 =printf("Esto es un char, carácter nulo: %c\n", c2);
	printf("Núm de caracteres: %zu\n\n", r4);

	//Prueba con s - string
	char	*s = "string string striiing ";
	size_t r5 = ft_printf("Esto es una string: %s\n", s);
	ft_printf("Núm de caracteres: %u\n", r5);
	//Prueba con función original
	size_t r6 = printf("Esto es una string: %s\n", s);
	printf("Núm de caracteres: %zu\n\n", r6);

	char	*s2 = NULL;
	size_t r7 = ft_printf("Esto es una string == NULL: %s\n", s2);
	ft_printf("Núm de caracteres: %u\n", r7);
	//Prueba con función original
	size_t r8 = printf("Esto es una string == NULL: %s\n", s2);
	printf("Núm de caracteres: %zu\n\n", r8);

	//Prueba con p - puntero a hexadecimal --> AHORA NO FUNCIONA
	void	*p = "algo";
	size_t r9 = ft_printf("Esto es la dirección de un puntero: %p\n", p);
	ft_printf("Núm de caracteres: %u\n", r9);
	size_t r10 = printf("Esto es la dirección de un puntero: %p\n", p);
	printf("Núm de caracteres: %zu\n\n", r10);

	void	*ptr = "Holaa";
	size_t ra = ft_printf("Esto es la dirección de otro puntero: %p\n", ptr);
	ft_printf("Núm de caracteres: %u\n", ra);
	size_t rb = printf("Esto es la dirección de otro puntero: %p\n", ptr);
	printf("Núm de caracteres: %zu\n\n", rb);

	void	*p2 = NULL;
	size_t r11 = ft_printf("Esto es la dirección de un puntero NULL: %p\n", p2);
	ft_printf("Núm de caracteres: %u\n", r11);
	size_t r12 = printf("Esto es la dirección de un puntero NULL: %p\n", p2);
	printf("Núm de caracteres: %zu\n\n", r12);

	//Prueba con d - decimal
	int	d = 998;
	size_t r13 = ft_printf("Esto es un número en formato decimal: %d\n", d);
	ft_printf("Núm de caracteres: %u\n", r13);
	size_t r14 = printf("Esto es un número en formato decimal: %d\n", d);
	printf("Núm de caracteres: %zu\n\n", r14);

	int	d2 = 0;
	size_t r15 = ft_printf("Esto es cero en formato decimal: %d\n", d2);
	ft_printf("Núm de caracteres: %u\n", r15);
	size_t r16 = printf("Esto es cero en formato decimal: %d\n", d2);
	printf("Núm de caracteres: %zu\n\n", r16);

	int	d3 = -7789;
	size_t r17 = ft_printf("Esto es un número negativo en formato decimal: %d\n", d3);
	ft_printf("Núm de caracteres: %u\n", r17);
	size_t r18 = printf("Esto es un número negativo en formato decimal: %d\n", d3);
	printf("Núm de caracteres: %zu\n\n", r18);

	int	d4 = -2147483648;
	size_t r19 = ft_printf("Esto es el mínimo negativo en formato decimal: %d\n", d4);
	ft_printf("Núm de caracteres: %u\n", r19);
	size_t r20 = printf("Esto es el mínimo negativo en formato decimal: %d\n", d4);
	printf("Núm de caracteres: %zu\n\n", r20);


	//Prueba con i - entero
	int	i = 665;
	size_t r21 = ft_printf("Esto es un int: %i\n", i);
	ft_printf("Núm de caracteres: %u\n", r21);
	size_t r22 = printf("Esto es un int: %i\n", i);
	printf("Núm de caracteres: %zu\n\n", r22);

	int	in = -9999999;
	size_t rl = ft_printf("Esto es un int negativo: %i\n", in);
	ft_printf("Núm de caracteres: %u\n", rl);
	size_t rm = printf("Esto es un int negativo: %i\n", in);
	printf("Núm de caracteres: %zu\n\n", rm);


	//Prueba con u - entero sin signo
	unsigned int	u = 4294967287;
	size_t r23 = ft_printf("Esto es un unsigned int: %u\n", u);
	ft_printf("Núm de caracteres: %u\n", r23);
	size_t r24 = printf("Esto es un unsigned int: %u\n", u);
	printf("Núm de caracteres: %zu\n\n", r24);

	unsigned int	un = -99889988;
	size_t rx = ft_printf("Esto es un unsigned int metiéndole un negativo: %u\n", un);
	ft_printf("Núm de caracteres: %u\n", rx);
	size_t ry = printf("Esto es un unsigned int metiéndole un negativo: %u\n", un);
	printf("Núm de caracteres: %zu\n\n", ry);


	//Prueba con x - hexadecimal en minúscula
	unsigned int x = 255778;
	size_t r25 = ft_printf("Esto es un unsigned int en hexadecimal minúsculas: %x\n", x);
	ft_printf("Núm de caracteres: %u\n", r25);
	size_t r26 = printf("Esto es un unsigned int en hexadecimal minúsculas: %x\n", x);
	printf("Núm de caracteres: %zu\n\n", r26);


	//Prueba con X - hexadecimal en mayúscula
	unsigned int	X = 234573547;
	size_t r27 = ft_printf("Esto es un unsigned int en hexadecimal mayúsculas: %X\n", X);
	ft_printf("Núm de caracteres: %u\n", r27);
	size_t r28 = printf("Esto es un unsigned int en hexadecimal mayúsculas: %X\n", X);
	printf("Núm de caracteres: %zu\n\n", r28);


	//Prueba con %
	size_t r29 = ft_printf("Esto es un porcentaje: %%\n");
	ft_printf("Núm de caracteres: %u\n", r29);
	size_t r30 = printf("Esto es un porcentaje: %%\n");
	printf("Núm de caracteres: %zu\n\n", r30);

	//Prueba con una letra detrás de % que no debería hacer nada
	char	*prueba = "stringggg";
	size_t r31 = ft_printf("Esto no sabemos qué es: %t\n", prueba);
	ft_printf("Núm de caracteres: %u\n", r31);
	//size_t r32 = printf("Esto no sabemos qué es: %t", prueba);
	//printf("Núm de caracteres: %zu\n\n", r32);
}
