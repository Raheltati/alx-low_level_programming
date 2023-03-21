#include "main.h"

/**
 * print_alphabet - function prints lowercase alphabet
 *
 * Return: always 0;
 */

void print_alphabet(void);

{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
		_puchar(n);
	_putchar('\n');

}
