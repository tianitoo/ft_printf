#include "ft_printf.h"
#include "fcntl.h"
int main()
{
	int q;
	int	fd = open("tet.text",O_RDWR);
	close(1);
	q = printf("ok");
	write(fd,&q,1);
	//ft_printf("%r\n");
}