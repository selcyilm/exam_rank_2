#include <unistd.h>

void	hidenp(char *src, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (to_find[i])
	{
		if (to_find[i] == src[j])
		{
			j++;
		}
		i++;
	}
	if (src[j] == 0)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		hidenp(av[1], av[2]);
	}
	write(1, "\n", 1);
}