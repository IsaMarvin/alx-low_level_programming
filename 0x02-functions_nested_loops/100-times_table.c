#include "main.h"
/**
 * print_times_table - Print n times table starting with 0
 * Description: If n is greater than 15 or less than 0 print nothing
 * @n: type number
 */
void print_times_table(int n)
{
	int nu1 = 0, rw, cl;

	if (n > 15 || n < 0)
		return;
	while (nu1 <= n)
	{
		for (rw = 0; rw <= n; rw++)
		{
			cl = nu1 * rw;
			if (cl > 99)
			{
				_putchar(cl / 100 + '0');
				_putchar((cl / 10 % 10) + '0');
				_putchar(cl % 10 + '0');
			}
			else if (cl > 9)
			{
				_putchar(' ');
				_putchar(cl / 10 + '0');
				_putchar(cl % 10 + '0');
			}
			else if (rw != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(cl + '0');
			}
			else
				_putchar(cl + '0');

			if (rw != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		nu1++;
	}
}
