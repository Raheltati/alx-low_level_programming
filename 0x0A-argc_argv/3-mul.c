#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
		printf("Error\n");
	return (1);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = (num1 * num2); /**
				  *result is declared and initialized to the product of num1 and num2
				  */

	printf("%d\n", result);
	return (0);
}
