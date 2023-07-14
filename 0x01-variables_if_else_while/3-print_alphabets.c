#include <stdio.h>

/**
 * main - display the alphabet in lowercase, and then in uppercase
 * Return: return 0 and exit the program
 */
int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
