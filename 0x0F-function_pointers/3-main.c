#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - calc
 * @argc: Number of aguement count
 * @argv: pointer to an argument
 *
 * Return: 0 on success, print Error and exit with 98 if incorrect
 *  number of args, exit with 99 if the operator given is incorrect
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int num1, num2, result;

	if (argc == 4)
	{
		if (strlen(argv[2]) != 1)
		{
			printf("Error\n");
			exit(99);
		}
		operation = get_op_func(argv[2]);
		if (operation == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		result = operation(num1, num2);

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}

