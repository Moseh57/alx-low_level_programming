#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that creates a 2d matrix
 * @width: an integer for width
 * @height: an integer for height
 * Return: pointer to the matrix
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			s[j][i] = 0;
	}
	return (s);
}
