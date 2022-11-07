#include "ft_printf.h"

void	ft_putstr(char *s, int *printed)
{
	write(1, s, ft_strlen(s));
	*printed = *printed + ft_strlen(s);
}