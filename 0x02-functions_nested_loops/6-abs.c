#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @a: parameter to be computed
 * Return: a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
