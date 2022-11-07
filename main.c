#include "ft_printf.h"

int main()
{
	void *daDta;
	void *data;
	int i = ft_printf("hel %s lo %s ok %c lk  %%  %x  %u  jdsf\n", "lo folo", "am here", 'q', daDta, 11, 2147483649);
	int j = printf("hel %s lo %s ok %c lk  %%  %x  %u  jdsf\n", "lo folo", "am here", 'q', daDta, 11, 2147483649);
	ft_printf("hel %s lo %s ok %c lk  %%  %X  %u  jdsf\n", "lo folo", "am here", 'q', data, 11, 2147483649);
	   printf("hel %s lo %s ok %c lk  %%  %X  %u  jdsf\n", "lo folo", "am here", 'q', data, 11, 2147483649);

	ft_printf("mine : %d\n", i);
	printf("original : %d", j);
}