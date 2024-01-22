#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 9 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
}

bool	is_prime(int num)
{
	int	i;

	i = 2;
	if (num == 2)
		return (true);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (false);
		i++;
	}
	return (true);
}

void	add_prime_sum(int num)
{
	if (num <= 1)
	{
		write(1, "0", 1);
		return ;
	}
	int	sum;
	int	i;

	sum = 0;
	i = 2;
	while (i <= num)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		add_prime_sum(ft_atoi(av[1]));
		ft_putchar('\n');
		exit(0);
	}
	write(1, "0\n", 2);
}