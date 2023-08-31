#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Write a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: string charcater
 *
 * Return: 1 if its palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	int end;

	end = _strlen_recursion(s);

	return (check_pal(s, 0, end - 1));
}

/**
 * _strlen_recursion - return the length of a string length
 * @s: string character
 *
 * Return: lenth of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check charcter recusively for palindroe
 * @s - string charcter
 * @i: ilteration
 * @len: length
 *
 * Return: 1 if palindrom 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (i >= len)
	{
		return (1);
	}
	if (s[i] != s[len])
	{
		return (0);
	}
		return (check_pal(s, i + 1, len - 1));
}
