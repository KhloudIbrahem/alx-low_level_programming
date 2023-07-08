#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: the number.
 * Return: the absolute value of the number.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
