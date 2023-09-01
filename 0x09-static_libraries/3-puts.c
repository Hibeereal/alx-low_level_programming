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
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	_putchar('\n');
}
