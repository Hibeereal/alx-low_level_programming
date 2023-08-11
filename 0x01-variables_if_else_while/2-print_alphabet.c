#include <stdio.h>

/**
 * main - Entry point "print the alhapbet in lowercase
 * folowed by a new line"
 *
 * Return: Always 0 (Success)
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
