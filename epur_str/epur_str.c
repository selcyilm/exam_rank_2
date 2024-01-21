#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	epur_str(char *str)
{
	int	i;
	bool	is_space;

	is_space = false;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		is_space = false;
		while (str[i] == ' ' || str[i] == '\t')
		{
			i++;
			is_space = true;
		}
		if (is_space && str[i])
			write(1, " ", 1);
		if (str[i])
			write(1, &str[i], 1);
		else
			break ;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		epur_str(av[1]);
	}
	write(1, "\n", 1);
}