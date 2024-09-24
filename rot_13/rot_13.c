#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

char	*rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			str[i] += 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] = 96 + 13 - ('z' - str[i]);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] = 64 + 13 - ('Z' - str[i]);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr("\n");
		return (0);
	}
	ft_putstr(rot13(av[1]));
	ft_putstr("\n");
}