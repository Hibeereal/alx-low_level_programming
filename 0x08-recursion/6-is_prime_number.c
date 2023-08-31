#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number - Write a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: value
 *
 * Return: 1 if its a prime number and 0 otherwise
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
		return (actual_prime(n, n - 1));
	}
	return (0);
}

/**
 * actual_prime - function that return 1 if the inpute
 * is a prime number
 * @n: firt value
 * @i: second value
 *
 * Return: 1 if its a prime number and 0 if otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
		return (actual_prime(n, i - 1));
	}
	return (0);
}
