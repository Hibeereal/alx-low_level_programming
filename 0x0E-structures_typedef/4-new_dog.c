#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Write a function that creates a new dog.
 * @name: name of the struct type
 * @age: age of the struct member
 * @owner: struct member
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *bull_dog = (dog_t *) malloc(sizeof(dog_t));

	if (bull_dog == NULL)
	{
		return (NULL);
	}

	bull_dog->name = strdup(name);
	bull_dog->owner = strdup(owner);

	if (bull_dog->name == NULL || bull_dog->owner == NULL)
	{
		return (NULL);
	}
	bull_dog->age = age;
	return (bull_dog);
}
