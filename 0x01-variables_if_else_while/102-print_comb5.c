#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;
	int m;

	for (n = 0 ; n <= 98 ; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (n == 98 && m == 99)
				continue;
			putchar(',');
				putchar(' ');


		}
	}
	putchar('\n');
	return (0);
}

