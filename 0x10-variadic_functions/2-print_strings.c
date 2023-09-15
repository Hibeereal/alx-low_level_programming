#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Write a function that prints strings, followed by a new
 * line.
 * @separator: separator value in between strings
 * @n: value to be passed
 *
 * Return: 0 on success
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *result;
	va_list strings;
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(strings, char *);
		if (result != NULL)
		{
			printf("%s", result);
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(strings);
	printf("\n");
}
