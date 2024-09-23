#include "libftprintf.h"

void	ft_puthexlower_pf(unsigned int n, size_t count);
void    ft_putchar_pf(char c, size_t count);
int	main()
{
	int	count = 0;
	unsigned int	n = 344;
	
	ft_puthexlower_pf(n, count);
	return (0);
}
