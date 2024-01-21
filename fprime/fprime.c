#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool	is_prime(int num)
{
	int	i;

	i = 2;
	if (num == 2)
		return (true);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (false);
		i++;
	}
	return (true);
}

void	fprime(int	num)
{
	int	i;
	bool	is_in = false;
	i = 2;
	if (num <= 0)
		return ;
	else if (num == 1)
	{
		printf("1");
		return ;
	}
	while (num != 1 && num != 0)
	{
		is_in = false;
		while (is_prime(i) && num % i == 0)
		{
			if (is_in)
				printf("*");
			printf("%d", i);
			num /= i;
			is_in = true;
		}
		if (is_in && num != 1)
			printf("*");
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		fprime(atoi(av[1]));
	}
	printf("\n");
}