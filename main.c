#include "ft_printf.h"

int main()
{
	void *daDta;
	void *data;
	ft_printf("hel %s lo %s ok %c lk  %%  |%p|  %x    jdsf\n", "lo folo", "am here", 'q', daDta, 11);
	   printf("hel %s lo %s ok %c lk  %%  |%p|  %x    jdsf\n", "lo folo", "am here", 'q', daDta, 11);	
	ft_printf("hel %s lo %s ok %c lk  %%  |%p|  %X    jdsf\n", "lo folo", "am here", 'q', data, 11);
	   printf("hel %s lo %s ok %c lk  %%  |%p|  %X    jdsf\n", "lo folo", "am here", 'q', data, 11);
}