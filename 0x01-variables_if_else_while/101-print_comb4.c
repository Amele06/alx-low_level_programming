#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, l;

	for (m = 48 ; m < 58 ; m++)
	{
		for (n = 49 ; n < 58 ; n++)
		{
			for (l = 50 ; l < 58 ; l++)
			{
				if (l > n && n > m)
				{
					putchar(m);
					putchar(n);
					putchar(l);
					if (m != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
