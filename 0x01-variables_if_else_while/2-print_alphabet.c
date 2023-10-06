#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet from 'a' to 'z'
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
