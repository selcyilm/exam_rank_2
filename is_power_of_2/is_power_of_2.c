#include <stdlib.h>
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n != 1)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

/*int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", is_power_of_2(atoi(av[1])));
	}
}*/
