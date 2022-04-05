#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to 2d array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL upon failure
 **/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);

}
