#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbers,
 * followed by a new line.
 * @separator: seperator after the printed numbers
 * @n: number passed
 *
 * Return: 0 on success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(numbers, int);
		printf("%d", result);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
