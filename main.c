#include "ft_printf.h"

int main()
{
	void *daDta;
	void *data;
	int i = ft_printf("| %d |\n", 4823);
	int j =    printf("| %d |\n", 4823);
	//         ft_printf("| %d |\n", 4823);
	//            printf("| %d |\n", 4823);

	printf("mine : %d\n", i);
	printf("original : %d\n", j);
}