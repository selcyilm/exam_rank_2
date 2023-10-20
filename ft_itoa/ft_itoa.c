#include <stdlib.h>
#include <stdio.h>

int	len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}

	return (i);
}

char	*ft_itoa(int nbr)
{
	long long a;
	int i;
	char *p;

	a = (long long)nbr;
	i = len(a);
	if (nbr < 0)
	{
		a = -a;
		i += 1;
	}
	p = malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	p[i] = 0;
	while (i-- > 0)
	{
		p[i] = (a % 10) + '0';
		a /= 10;
	}
	if (nbr < 0)
		p[0] = '-';
	return (p);
}

/*int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = atoi(av[1]);
		char *str = ft_itoa(i);
		printf("|%s|\n", str);
		free(str);
	}
}*/
