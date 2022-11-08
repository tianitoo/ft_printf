#include "ft_printf.h"

void	ft_putstr(char *s, int *printed)
{
	int i;

	i = 0;
	while(s[i++])
		ft_putchar(s[i], printed);
}