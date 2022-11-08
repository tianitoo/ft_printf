#include "ft_printf.h"

void ft_putchar(char c, int *printed)
{
	write(1, &c, 1);
	(*printed)++;
}