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
				ft_putchar(va_arg(vl, int), &printed);
			if(str[i] == '%')
				ft_putchar('%', &printed);
			if(str[i] == 's')
				ft_putstr((char *)va_arg(vl, char *), &printed);
			if(str[i] == 'd' || str[i] == 'i')
				ft_putnbr(va_arg(vl, int), &printed);
			if(str[i] == 'u')
				ft_putunsignednbr(va_arg(vl, unsigned int), &printed);
			if(str[i] == 'p' || str[i] == 'x' || str[i] == 'X')
			{
				if(str[i] == 'p')
					ft_putstr("0x", &printed);
				ft_puthex(va_arg(vl, unsigned long long), str[i], &printed);
			}
		}
		else
			ft_putchar(str[i], &printed);
		printed++;
		i++;
	}
	va_end(vl);
	return (printed);
}
