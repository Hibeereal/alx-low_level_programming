#include "main.h"
#include <unistd.h>

/**
 * _putchar - demo
 * @c: charcter
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
