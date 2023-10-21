#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**p;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!(p = malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i])
	{
		j = 0;
		if (!(p[k] = malloc(sizeof(char *) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
			p[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		p[k][j] = 0;
		k++;
	}
	p[k] = 0;
	return (p);
}

/*int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char **new = ft_split(av[1]);
		for (int i = 0; i < 4; i++)
			printf("%s\n", new[i]);
		free(new);
	}
}*/