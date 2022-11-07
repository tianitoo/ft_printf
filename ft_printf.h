#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int	ft_printf(const char *, ...);
void ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_strlen(char *s);
void	ft_puthex(unsigned long long num, char c);
void	ft_putnbr(int n);

#endif
