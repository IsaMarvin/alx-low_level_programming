#include <stdio.h>
/**
 * main - print number of base16 in lowercase
 * Return: return 0 and exit the program
 */
int main(void)
{
	int i;
	char a[16] = "0123456789abcdef";
	char b;

	i = 0;
	while (i < 16)
	{
		b = a[i];
		putchar(b);
		i++;
	}
	putchar('\n');
	return (0);
}
