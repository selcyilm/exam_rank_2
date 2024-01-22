#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

void	rostring(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	k = i;
	while (str[i])
	{
		while ((str[i] != ' ' && str[i] != '\t') && str[i])
			i++;
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		while ((str[i] != ' ' && str[i] != '\t') && 
		str[i] && (str[i - 1] == ' ' || str[i - 1] == '\t'))
		{
			while ((str[i] != ' ' && str[i] != '\t') && str[i])
				write(1, &str[i++], 1);
			write(1, " ", 1);
			i++;
		}
	}
	while ((str[k] != ' ' && str[k] != '\t') && str[k])
		write(1, &str[k++], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rostring(av[1]);
	}
	write(1, "\n", 1);
}