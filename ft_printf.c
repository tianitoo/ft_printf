#include "ft_printf.h"

int typetest(va_list vl, char c, int *printed)
{
	if(c == 'c')
		ft_putchar(va_arg(vl, int), printed);
	if(c == '%')
		ft_putchar('%', printed);
	if(c == 's')
		ft_putstr((char *)va_arg(vl, char *), printed);
	if(c == 'd' || c == 'i')
		ft_putnbr(va_arg(vl, int), printed);
	if(c == 'u')
		ft_putunsignednbr(va_arg(vl, unsigned int), printed);
	if(c == 'p' || c == 'x' || c == 'X')
	{
		if(c == 'p')
			ft_putstr("0x", printed);
		ft_puthex(va_arg(vl, unsigned long long), c, printed);
	}
}

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
			typetest(vl, str[i], &printed);
		}
		else
		{
			ft_putchar(str[i], &printed);
			printed++;
		}
		i++;
	}
	va_end(vl);
	return (printed);
}
