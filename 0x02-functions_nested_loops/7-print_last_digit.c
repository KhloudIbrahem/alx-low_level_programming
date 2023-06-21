#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number.
 * Return: the last digit of a number.
 */
int print_last_digit(int n)
{
	int res;

	if (n < 0)
		n = n * -1;
	res = n % 10;
	if (res < 0)
		res = res * -1;
	_putchar(res + '0');
	return (res);
}
