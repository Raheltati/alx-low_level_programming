#include <stdio.h>

/**
 * main - program  prints all possible combinations of single-digit numbers
 *
 * Return: always 0 (Success)
 */
int main(void)

{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		if (n == 9)
			putchar(n + '0');
		else
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	}


	return (0);
}
