#include <stdio.h>

/**
 * main - prints number of arguments passed into it.
 * @argc: tye int argument
 * @argv: type char argument of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
