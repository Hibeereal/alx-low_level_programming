#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: string to be concat
 * @s2: string to be concat
 *
 * Return: Null
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
