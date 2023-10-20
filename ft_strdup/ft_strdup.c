#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*p;

	size = ft_strlen(src);
	p = malloc(sizeof(char) * size + 1);
	if (!p)
		return (0);
	i = 0;
	while (i < size)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = 0;
	return (p);
}