#include <unistd.h>
#include "main.h"

/**
 * _isupper - "Write a function that checks for uppercase character."
 * @c: int value
 *
 * Return: 1 if uppercase 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
