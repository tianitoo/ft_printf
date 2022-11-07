#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list vl;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(vl, str);
	while(str[i] && str)
	{
		if(str[i] == '%')
		{
			i++;
			if(str[i] == 'c')
				ft_putchar(va_arg(vl, int));
			if(str[i] == '%')
				ft_putchar('%');
			if(str[i] == 's')
				ft_putstr((char *)va_arg(vl, char *));
			if(str[i] == 'd' || str[i] == 'i')
				ft_putnbr((int) va_arg(vl, int));
			if(str[i] == 'p' || str[i] == 'x' || str[i] == 'X')
			{
				if(str[i] == 'p')
					ft_putstr("0x");
				ft_puthex(va_arg(vl, unsigned long long), str[i]);
			}
		}
		else
			ft_putchar(str[i]);
		printed++;
		i++;
	}
	va_end(vl);
	return (printed);
}
