#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	print(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
		write(1, &str[i--], 1);
}

void	rev_wstr(char *s)
{
	int	len = ft_strlen(s);
	int	i = 0;
	int	j = 0;
	char temp[100];

	for ( i = 0; i < len; i++)
	{
		for (j = 0; i < len; i++, j++)
		{
			if (s[i] == ' ' || s[i] == '\t')
				break;
			temp[j] = s[i];
		}

		while (j > 0)
		{
			j--;
			s[i -j -1] = temp[j];
		}
	}
	print(s);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_wstr(av[1]);
	}
	write(1, "\n", 1);
}
