#include "ft_printf.h"

void	ft_putunsignednbr(unsigned int n)
{
	char	c;

	if (n == 0)
		c = '0';
	if (n > 0)
	{
		c = n % 10 + '0';
		n /= 10;
	}
	if (n != 0)
		ft_putnbr(n);
	write(1, &c, 1);
}
