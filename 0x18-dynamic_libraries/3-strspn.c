#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;
	int i = 0;

	while (*s != '\0')
	{
		found = 0;
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		i++;
			}
		if (!found)
			break;
		s++;
	}
	return (count);


}
