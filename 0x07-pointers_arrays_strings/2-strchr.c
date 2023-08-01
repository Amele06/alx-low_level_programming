#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to search from
 * @c: character to search in s
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
