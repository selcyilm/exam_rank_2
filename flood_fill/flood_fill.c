#include <stdbool.h>

typedef struct	s_point
{
	int	x;
	int	y;
}	t_point;

void	flodd(char **tab, t_point size, t_point poi, char to_fill)
{
	if (poi.x < 0 || poi.x >= size.x || poi.y < 0 || poi.y >= size.y ||
		tab[poi.y][poi.x] != to_fill)
		return ;
	tab[poi.y][poi.x] = 'F';
	flodd(tab, size, (t_point){poi.x - 1, poi.y}, to_fill);
	flodd(tab, size, (t_point){poi.x + 1, poi.y}, to_fill);
	flodd(tab, size, (t_point){poi.x, poi.y - 1}, to_fill);
	flodd(tab, size, (t_point){poi.x, poi.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	flodd(tab, size, begin, tab[begin.y][begin.x]);
}

/*#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}*/