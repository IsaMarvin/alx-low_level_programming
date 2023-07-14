#include <stdio.h>
/**
 * main -  print differente combination of two digit-numbers
 * Return: return 0 and exit program
 */
int main(void)
{
	int num1 = '0';
	int num2 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			if (!(num1 > num2 || num1 == num2))
			{
				putchar(num1);
				putchar(num2);
				if (num1 == '8' && num2 == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num2 = '0';
		num1++;
	}
	return (0);
}
