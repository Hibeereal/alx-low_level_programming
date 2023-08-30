#include <math.h>
#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Write a function that returns the natural square root of
 * a number
 * @n: value
 *
 * Return: -1 if n is not a natural sqrt
 */

int _sqrt_recursion(int n)
{
	int sqr_value;

	sqr_value = sqrt(n);

	if (sqr_value * sqr_value == n)
	{
		return (sqr_value);
	}
	else if (sqr_value * sqr_value < n)
	{
		return (-1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return _sqrt_recursion(sqr_value + 1);
	}
}
