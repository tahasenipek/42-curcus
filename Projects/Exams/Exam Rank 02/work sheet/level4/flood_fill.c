#include <stdlib.h>
#include <stdio.h>
#include "floodfill.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while(i <= begin.y)
	{
		while (c < size.x)
		{
			if (tab[i][c] == '1' && tab[i][c] != '\0')
			{
				tab[i][c] = 'F';
			}
			c++;
		}
		c = 0;
		i++;
	}
}

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
}