#include "main.h"

int primecheck(int n, int i);

/**
 * is_prime_number - returns 1 if
 * the input integer is a prime number, otherwise return 0.
 * @n: the number.
 * Return: 1 in success and 0 in error.
 */
int is_prime_number(int n)
{
	return (primecheck(n, 1));
}

/**
 * primecheck - to check prime numbers.
 * @n: the number.
 * @i: the iterator.
 * Return: 1 for success and 0 in error.
 */
int primecheck(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (primecheck(n, i + 1));
}
