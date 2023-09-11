#include "dog.h"
#include <stdio.h>
#include <string.h>

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
	d-> name = strdup(name);
	d-> age = age;
	d-> owner = strdup(owner);
}
