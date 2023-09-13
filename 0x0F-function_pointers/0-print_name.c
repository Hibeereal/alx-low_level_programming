#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Write a function that prints a name.
 * @name: parameter arg
 * @f: function pointer
 *
 * Return: null
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
