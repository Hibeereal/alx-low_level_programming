#include <stdio.h>

/**
 * main - entry point " write a program that print alphabet
 * in lowercase followed by a new line"
 *
 * Return: Always (success)
 */

int main(void)

{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
