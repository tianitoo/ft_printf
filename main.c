#include "ft_printf.h"

int main()
{
	void *daDta;
	void *data;
	ft_printf("hel %s lo %s ok %c lk  %%  |%p|  %x  %u  jdsf\n", "lo folo", "am here", 'q', daDta, 11, 2147483649);
	   printf("hel %s lo %s ok %c lk  %%  |%p|  %x  %u  jdsf\n", "lo folo", "am here", 'q', daDta, 11, 2147483649);
	ft_printf("hel %s lo %s ok %c lk  %%  |%p|  %X  %u  jdsf\n", "lo folo", "am here", 'q', data, 11, 2147483649);
	   printf("hel %s lo %s ok %c lk  %%  |%p|  %X  %u  jdsf\n", "lo folo", "am here", 'q', data, 11, 2147483649);
}