#include <stdio.h>
#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);

	unsigned int n;
	if (a > b)
		n = a;
	else
		n = b;

	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}

/*unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	gcd;
	int	org_a;
	int	org_b;

	gcd = 0;
	org_a = a;
	org_b = b;
	while (1)
	{
		if (a == 0)
			break;
		b %=a;
		if (b == 0)
			break;
		a %= b;
	}
	gcd = (!b) ? a : b;
	return (gcd ? (org_a / gcd * org_b) : 0);
}*/

/*unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (a <= 0 || b <= 0)
		return (0);
	if (a == b)
		return (a);
	unsigned int	i;
	unsigned int	result;

	result = 1;
	i = 2;
	while (a % i == 0 && b % i == 0)
	{
		result *= i;
		a /= i;
		b /= i;
		if (a % i != 0 || b % i != 0)
			i++;
	}
	return (result * a * b);
}*/

/*int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("LCM IS: %u\n", lcm(atol(av[1]), atol(av[2])));

	}
}*/
