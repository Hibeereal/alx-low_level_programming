#include <stdio.h>

/**
 * main - Entry point "write a program that print base 10
 * numbers starting from 0"
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
