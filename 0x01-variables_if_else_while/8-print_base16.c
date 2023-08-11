#include <stdio.h>
/**
 * main - Entry point " write a program that prints base 16"
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int i;
	int k;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (k = 97; k <= 102; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
