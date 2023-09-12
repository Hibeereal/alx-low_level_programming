#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Write a function that prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: ");
	if (d->name == NULL)
	{
		printf("%s\n", d->name);
	}
	else
	{
		printf("(nil)\n");
	}
	printf("Age: %f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("(nil)\n");
	}
}
