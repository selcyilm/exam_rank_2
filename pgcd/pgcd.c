#include <stdio.h>
#include <stdlib.h>

int	pgcd(int i, int j)
{
	int	deno;
	int	loop;
	int	delimeter;
	if (i > j)
		loop = j;
	else if ( i == j)
		return (i);
	else
		loop = i;
	deno = 1;
	delimeter = 1;
	while (loop >= 0)
	{
		if (i % delimeter == 0 && j % delimeter == 0)
			deno = delimeter;
		delimeter++;
		loop--;
	}
	return (deno);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = atoi(av[1]);
		int j = atoi(av[2]);
		printf("%d",pgcd(i, j));
	}
	printf("\n");
}