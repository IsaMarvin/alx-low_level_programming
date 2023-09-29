#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number 'n', calculates its
 * last digit 'm', and classifies 'm' based on whether it's greater than 5,
 * less than 6 and not 0, or equal to 0.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	printf("Last digit of %d ", n);
	if (m == 0)
		printf("is %d and is 0\n", m);
	else if (m > 5)
		printf("is %d and is greater than 5\n", m);
	else
		printf("is %d and is less than 6 and not 0\n", m);
	return (0);
}
