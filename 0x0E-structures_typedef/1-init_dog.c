#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: structure name
 * @name: strings value
 * @age: handle float value
 * @owner: strings value
 *
 * Return: 0 always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = (char *)malloc(strlen(name) + 1);
	d->age = age;
	d->owner = (char *)malloc(strlen(owner) + 1);

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);

	if (d->name == NULL || d->owner == NULL)
	{
		exit(1);
	}
	if (d == NULL)
	{
		return;
	}
}
