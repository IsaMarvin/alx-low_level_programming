#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: return 0 and exit the program
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
