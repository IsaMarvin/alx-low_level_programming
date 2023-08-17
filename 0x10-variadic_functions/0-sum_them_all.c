#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - func that returns the sum of all parameters.
 * @n: type unsigned int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int x;
	va_list valist;


	if (n == 0)
		return (0);

	va_start(valist, n);

	sum = x = 0;
	while (x < n)
	{
		sum = sum + va_arg(valist, int);
		x++;
	}
	va_end(valist);
	return (sum);
}
