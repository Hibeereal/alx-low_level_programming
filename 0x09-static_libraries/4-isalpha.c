#include <unistd.h>
#include "main.h"

/**
 * _isalpha - "Write a function that checks for alphabetic character."
 * @c: character to be checked
 *
 * Return: 1 if lowercase or upercase and 0 if otherwise
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
