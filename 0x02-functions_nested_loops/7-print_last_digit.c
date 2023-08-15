#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - "Write a function that prints the last
 * digit of a number."
 * @n: value of the last digit
 *
 * Return: value of last digit
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
