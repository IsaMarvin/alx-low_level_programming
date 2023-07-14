#include <stdio.h>
/**
 * main - print all combination of two digit-numbers
 * Return: return 0 and exit
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 99; n1++)
	{
		for (n2 = 0; n2 <= 99; n2++)
		{
			if (n1 < n2 && n1 != n2)
			{
				putchar((n1 / 10) + '0');
				putchar((n1 % 10) + '0');
				putchar(' ');
				putchar((n2 / 10) + '0');
				putchar((n2 % 10) + '0');
				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
