#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given as a
 * parameter on each element of an array.
 * @array: number of element to execute
 * @size: size of the element
 * @action: function pointer
 * 
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
