#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n elements of an array of int.
 * @a: Type int pointer
 * @n: Type int
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int b, num;

	num = n - 1;

	for (b = 0; b <= num; b++)
	{
		printf("%d", a[b]);

		if (b < num)
		{
			printf(", ");
		}
	}
	printf("\n");
}
