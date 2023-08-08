#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		g[h] = malloc(sizeof(int) * width);

		if (g[h] == NULL)
		{
			while(h--)
				free(g[h]);

			free(g);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			g[h][w] = 0;
	}

	return (g);
}
