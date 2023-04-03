#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *p, *q;
	{
	while (*haystack != '\0')
	
	p = haystack;
	q = needle;
	}
	
	while (*q != '\0' && *p == *q)
	{
		p++;
		q++;
	}

	if (*q == '\0')
	return (haystack);

	haystack++;

	return (0);
}

