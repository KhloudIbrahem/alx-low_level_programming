#include "main.h"

int sqart(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number.
 * Return: the square root of the number.
 */
int _sqrt_recursion(int n)
{
	return (sqart(n, 1));
}

/**
 * sqart - calculates the square root.
 * @n: the number.
 * @i: the iterator.
 * Return: the square root.
 */
int sqart(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (sqart(n, i + 1));
}
