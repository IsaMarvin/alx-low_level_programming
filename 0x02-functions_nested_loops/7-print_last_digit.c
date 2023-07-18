#include "main.h"
/**
 * print_last_digit - Print last digit of a number
 *
 * @a: Type int a and @b type int b
 *
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		b = -1 * (a % 10);
		_putchar(b + '0');
		return (b);
	}
	else
	{
		b = a % 10;
		_putchar(b + '0');
		return (b);
	}
}
