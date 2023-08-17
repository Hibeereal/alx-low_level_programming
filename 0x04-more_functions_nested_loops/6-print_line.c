#include "main.h"

/**
 * print_line - Write a function that draws a straight line in
 * the terminal
 * @n: number of times to be printed
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
