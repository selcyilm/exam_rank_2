#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool	is_cover(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (true);
		i++;
	}
	return (false);
}
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	while (s[i])
	{
		if (is_cover(reject, s[i]))
			return (i);
		i++;
	}
	return (i);
}

/*int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("original: %ld\n", strcspn(av[1], av[2]));
		printf("mine: %ld\n", ft_strcspn(av[1], av[2]));

	}
}*/