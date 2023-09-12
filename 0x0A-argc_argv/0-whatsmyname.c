#include "main.h"
#include <unistd.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: command line comman
 * @argv: array argument
 *
 * Return: 0
 */

/**
 * _putchar - write function
 * @c: character value
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(int argc, char *argv[])
{

	char *name;

	if (argc == 1)
	{

	name = argv[0];

	while (*name)
	{
		_putchar(*name);
		name++;
	}
	}
	_putchar('\n');
	return (0);
}
