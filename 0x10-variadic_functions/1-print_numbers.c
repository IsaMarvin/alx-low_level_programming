#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - func that print numbers followed by a new line.
 * @n: Type unsigned int number of int passed to a function
 * @separator: type char pointer string to be printed between numbers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	int x = n;

	if (separator == NULL)
		separator = "";

	va_start(valist, n);
	if (x--)
		printf("%d", va_arg(valist, int));
	while (x-- > 0)
		printf("%s%d", separator, va_arg(valist, int));
	printf("\n");
	va_end(valist);
}
