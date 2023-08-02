#include "main.h"
#include <stdio.h>

/**
 * funct - Allows operation of _sqrt_recursion
 * @x: type int that define sqrt root
 * @y: type int that compares x
 * Return: sqrt int or -1 if not int
 */

int funct(int x, int y)
{
	int sqrt;

	sqrt = y * y;
	if (sqrt == x)
		return (y);
	else if (sqrt < x)
		return (funct(x, y + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural sqr root number.
 * @n: type int
 * Return: If n not sqt root then return -1
 */
int _sqrt_recursion(int n)
{
	return (funct(n, 1));
}
