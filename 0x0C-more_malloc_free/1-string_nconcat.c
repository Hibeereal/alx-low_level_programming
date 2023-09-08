#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of allocated space
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int concat_len;
	char *arr;

	len1 = strlen(s1);
	len2 = strlen(s2);
	concat_len = len1 + ((n >= len2) ? len2 : n);

	if (s1 ==  NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	arr = (char *) malloc( concat_len + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	strcpy(arr, s1);
	strncat(arr, s2, (n >= len2) ? len2 : n);
	return (arr);
}
