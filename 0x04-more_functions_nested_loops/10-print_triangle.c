#include "main.h"

/**
 * print_triangle - check the code.
 *
 *@size: variable
 *
 * Return: Always
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(32);
		}
			for (j = 1; j <= i; j++)
			{
				_putchar(35);
			}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
