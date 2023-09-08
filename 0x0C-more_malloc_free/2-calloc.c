#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Write a function that allocates memory for
 * an array, using malloc.
 * @nmemb: allocated space
 * @size: size of the space
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	arr = malloc(total_size);

	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, total_size);
	return (arr);
}
