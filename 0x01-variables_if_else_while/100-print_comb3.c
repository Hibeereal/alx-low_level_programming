#include <stdio.h>

/**
 * main - Entry points "Write a program that prints all possible different
 * combination of two digit"
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int i;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			putchar(i + '0');
			putchar(k + '0');
		}
		if (i < 8 || k < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
