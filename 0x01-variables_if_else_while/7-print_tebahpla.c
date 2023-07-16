#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char a;

	for (i = 'z' ; i >= 'a' ; a--)
		putchar(i);
	putchar('\n');
	return (0);
}
