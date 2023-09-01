#include "main.h"
#include <unistd.h>
/**
 * _puts -
 * @s:
 *
 * Return: 0
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
}
