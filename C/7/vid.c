#include <stdio.h>

int		*get()
{
	int *tab;
		
	tab = malloc(sizeof(*tab) * 9);
	return (tab);
}

int		*set()
{
	int lol;
	
	lol = 78;
	return (0);
}

int		main(void)
{
	int *ptr;

	ptr = get();
	*ptr = 12;
	printf("%d\n", *ptr);
	set();
	printf("%d\n", *ptr);
	return (0);
}
