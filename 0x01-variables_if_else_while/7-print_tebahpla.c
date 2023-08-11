#include <stdio.h>

/**
 * main - Entry point "write a program that print alphabet
 * in reverse order"
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	for (i = 97; i <= 122; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
