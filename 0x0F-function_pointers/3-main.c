#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
