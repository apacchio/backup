#include <unistd.h>

int		function(int f)
{
	if (f <= 42)
	{
		f += 1;
		write (1, "bleep", 5);
		function(f);
		return (0);
	}
	else
	{
		return (0);
	}
}

int		main()
{
	function(0);
	return (0);
}

		

