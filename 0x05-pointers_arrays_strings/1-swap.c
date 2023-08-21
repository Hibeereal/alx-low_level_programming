#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: first int value
 * @b: second int value
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;
	*b = tmp;
}
