#include "ft_printf.h"

void	ft_putstr(char *s, int *printed)
{
	int i;
	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)", printed);
	}
	else
		while(s[i])
			ft_putchar(s[i++], printed);
}