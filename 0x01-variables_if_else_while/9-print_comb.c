#include <stdio.h>
/**
 * main - print combinations of single digit-numbers
 * Return: return 0 and exit program
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
		i++;
	}
	putchar('\n');
	return (0);
}
