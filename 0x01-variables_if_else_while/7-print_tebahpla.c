#include <stdio.h>

/**
 * main - display alphabet reverse and lowercase
 * Return: return 0 and exit the program
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
			putchar(l);
		putchar('\n');

	return (0);
}
