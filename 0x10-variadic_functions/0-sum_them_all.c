#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: no of parameters passed.
 * @...: no of parameters used to sum.
 * Return: 0 if n == 0 or sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumparas;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(sumparas, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(sumparas, int);
	va_end(sumparas);
	return (sum);
}
