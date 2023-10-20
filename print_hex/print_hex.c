#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

void	print_hex(int nb)
{
	int	base;
	char	hex[] = "0123456789abcdef";
	if (nb >= 16)
		print_hex(nb / 16);
	write(1, &hex[nb % 16], 1);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = ft_atoi(av[1]);
		print_hex(i);
	}
	write(1, "\n", 1);
}