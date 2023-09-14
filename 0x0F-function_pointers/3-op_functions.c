#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - take the sum of numbers
 * @a: first intrger
 * @b: second integer
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - take the sub of numbers
 * @a: first integer
 * @b: second integer
 *
 * Result: the substarction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - take the multiplications of numbers
 * @a: first integer
 * @b: second interger
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{

	return (a * b);
}

/**
 * op_div - take the division of numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: qouitent of a and b
 */

int op_div(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}


/**
 * op_mod - take the modulus of numbers
 * @a: first integer
 * @b: second interger
 *
 * Return: the remainder of a and b
 */

int op_mod(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
