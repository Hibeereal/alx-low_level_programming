#include <unistd.h>
#include "main.h"

/**
 * _islower - "Write a function that checks for lowercase character."
 * @c: the character to be checked
 *
 * Retun: 1 else return 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}