#include "main.h"
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers
 * @min: range of array
 * @max: range of array max
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int size;
	int *ptr;
	int i;

	size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
