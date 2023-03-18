#include <stdio.h>

/**
 * main - program prints all the numbers of base sixteen in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int  n;
	char m;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (m = 'a' ; m  <= 'f' ; m++)
		putchat(m);
	putchar('\n');
	return (0);
