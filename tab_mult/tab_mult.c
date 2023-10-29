#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr(int nbr)
{
	if (nbr < 10 && nbr >= 0)
	{
		ft_putchar(nbr + '0');
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

void	tab_mult(int n)
{
	int	i;

	i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(n);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(i * n);
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		write(1, "\n", 1);
	else if (ac == 2)
	{
		int	i = ft_atoi(av[1]);
		tab_mult(i);
	}
}