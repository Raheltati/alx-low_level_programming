#include "main.h"
#include <stdio.h>

/*
 *_puts_recursion - prints strin followed by new line
 *
 *@s: string
 *Return: no return
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
		printf("\n");

	else
		printf("%c", *s);
	_puts_recursion(s + 1);
}

