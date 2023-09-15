#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: variadic parameters
 *
 * Return: 0 on success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;
	va_list sum;
	va_start(sum, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sum, unsigned int);
	}
	va_end(sum);
	return (result);
}
