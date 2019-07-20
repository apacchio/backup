#include <stdio.h>

int		main(void)
{
		int nb;
		nb = 42;
		int *ptr;

		ptr = &nb;;
		printf("%p\n", ptr);
		return (0);
}
