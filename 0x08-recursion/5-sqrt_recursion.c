#include "main.h"
#include <stdio.h>

/**
 * power_operation - return square root of number
 * _sqrt_recursion - return natural square of number
 * @n: input number
 * @i: input
 * Return: square root of -1
 */
int power_operation(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power_operation(n, i + 1));

}

/**
 * _sqrt_recursion - return square of number
 * @n: input
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
