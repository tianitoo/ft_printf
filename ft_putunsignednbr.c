#include "ft_printf.h"

void	ft_putunsignednbr(unsigned int n, int *printed)
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
		ft_putunsignednbr(n, printed);
	ft_putchar(c, printed);
}
