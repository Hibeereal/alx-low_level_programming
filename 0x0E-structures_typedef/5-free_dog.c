#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_dog - write a function that free dog
 * @d: pointer to dog_t
 *
 * Return: nothing
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
