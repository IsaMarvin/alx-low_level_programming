#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet from 'a' to 'z'
 * followed by the uppercase alphabet from 'A' to 'Z', all on the same line,
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (A = 'A'; A <= 'Z'; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
