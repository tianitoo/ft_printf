#include "ft_printf.h"

void	ft_puthex(unsigned long long num, char c, int *printed)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, c, printed);
		ft_puthex(num % 16, c, printed);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0', printed);
		else
		{
			if (c == 'x')
				ft_putchar(num - 10 + 'a', printed);
			else
				ft_putchar(num - 10 + 'A', printed);
		}
	}
}