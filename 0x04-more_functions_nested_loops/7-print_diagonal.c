#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the
 * terminal
 * @n: number of times to be printed
 *
 * Return: 0
 */

void print_diagonal(int n)

{
	int i, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
