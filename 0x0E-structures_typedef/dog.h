#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: struct data type for strings
 * @age: struct member for age
 * @owner: data type for strings
 *
 * Return: 0 always
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
