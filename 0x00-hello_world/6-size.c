#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char a;
	int i;
	long int d;
	long long int c;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a float: %zu byte(s)\n",sizeof(f));

	return (0);
}
