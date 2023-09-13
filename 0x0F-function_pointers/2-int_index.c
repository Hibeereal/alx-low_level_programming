#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Write a function that searches for an integer.
 * @array: array of number to be checked
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: -1 if no element matches and if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
