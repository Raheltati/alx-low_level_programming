#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: always 0
 */

int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);

	}
	putchar('\n');

	return (0);
}
