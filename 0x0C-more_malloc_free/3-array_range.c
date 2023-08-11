#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return (NULL);
	j = max - min + 1;

	ptr = malloc(sizeof(int) * j);

	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		ptr[i] = min++;
	return (ptr);
}
