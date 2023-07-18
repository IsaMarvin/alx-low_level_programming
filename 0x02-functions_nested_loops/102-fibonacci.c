#include <stdio.h>
/**
 * main - print 50 fibonacci numbers
 *
 * Return: (0)
 */
int main(void)
{
	long fb1, fb2, sum, counter;

	fb1 = 0;
	fb2 = 1;
	for (counter = 0; counter < 50; counter++)
	{
		sum = fb1 + fb2;
		fb1 = fb2;
		fb2 = sum;
		if (counter != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}
	return (0);
}
