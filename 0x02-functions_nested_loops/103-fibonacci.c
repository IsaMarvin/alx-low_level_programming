#include <stdio.h>
/**
 * main - print value do not exceed 4000000
 * Return: 0
 */
int main(void)
{
	int fb1 = 1;
	int fb2 = 2;
	int fb3 = 0;
	int fb0;

	while (fb2 < 4000000)
	{
		if (fb2 % 2 == 0)
		{
			fb3 += fb2;
		}

		fb0 = fb2;
		fb2 += fb1;
		fb1 = fb0;
	}
	printf("%d\n", fb3);
	return (0);
}
