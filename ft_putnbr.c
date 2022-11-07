	#include "ft_printf.h"

void	ft_putnbr(int n, int *printed)
{
	char	c;
	size_t	nbr;

	nbr = n; 
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', printed);
	}
	if (n > 0)
	{
		c = n % 10 + '0';
		n /= 10;
	}
	if (n != 0)
	{
		ft_putnbr(n, printed);
	}
	write(1, &c, 1);
	(*printed)++;
}
