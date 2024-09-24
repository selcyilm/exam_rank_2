#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	getUppercaseSize(char *str)
{
	int	i;
	int	up;

	up = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			up++;
		i++;
	}
	return (up);
}

char	*camel_to_snake(char *str)
{
	char	*p;
	int		i;
	int		j;

	p = malloc(sizeof(char) * (ft_strlen(str) + getUppercaseSize(str) + 1));
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			p[j] = '_';
			p[++j] = str[i] + 32;
		}
		else
			p[j] = str[i];
		i++;
		j++;
	}
	return (p);
}

int	main(int ac, char **av)
{
	char *ret;

	ret = NULL;
	if (ac == 2)
	{
		ret = camel_to_snake(av[1]);
		ft_putstr(ret);
		free(ret);
	}
	ft_putstr("\n");
}

