#include <stdio.h>

/**
 * main - Entry point "Write a program that prints the alphabet in
 * lowercase and then te uppercase"
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int i;
	int k;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (k = 65; k <= 90; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
