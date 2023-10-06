#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the digits from '0' to '9'
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
