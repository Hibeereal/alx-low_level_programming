#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - take the sum of numbers
 * @a: first intrger
 * @b: second integer
 *
 * Return: 0 Always on success
 */

int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - take the sub of numbers
 * @a: first integer
 * @b: second integer
 *
 * Result: 0 Always on success
 */

int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - take the multiplications of numbers
 * @a: first integer
 * @b: second interger
 *
 * Return: 0 Always on success
 */

int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - take the division of numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 always on success
 */

int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = a / b;
	return (result);
}


/**
 * op_mod - take the modulus of numbers
 * @a: first integer
 * @b: second interger
 *
 * Return: 0 always on success
 */

int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a % b;
	return (result);
}
