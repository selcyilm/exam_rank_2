#include <stdio.h>
#include <stdlib.h>

char	*ft_to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;

	char *s = ft_to_lower((char *)str);
	char base[] = "0123456789abcdef";
	result = 0;
	sign = 1;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while ((*s >= '0' && *s <= '9') || (*s >= 'a' && *s <= 'f'))
	{
		result = (result * str_base) + get_nb(*s, base);
		s++;
	}
	return (sign * result);
}

/*int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
	}
}*/