//#include "ft_boolean.h"

#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_is_even(int nbr)
{	
	if (nbr % 2 == 0)
		return (1);
	else 
		return (0);
}

int main(int argc, char **argv)
{
	(void)argv;

	if (ft_is_even(argc - 1))
		ft_putstr("I have an even number or arguments");
	else
		ft_putstr("I have an odd number of arguments");
	return (1);
}
