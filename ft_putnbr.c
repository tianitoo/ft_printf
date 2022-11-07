#include "ft_printf.h"

void	ft_putnbr(int n)
{
	char	c;

	if (n == 0)
		c = '0';
	if (n == INT_MIN)
	{
		c = '8';
		n = n / 10;
	}
	else if (n < 0)
	{
		n = -n;
		c = '-';
		write(1, &c, 1);
	}
	if (n > 0)
	{
		c = n % 10 + '0';
		n /= 10;
	}
	if (n != 0)
		ft_putnbr(n);
	write(1, &c, 1);
}