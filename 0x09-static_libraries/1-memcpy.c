#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: source location
 * @dest: destination location
 * @n: number of byte to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
