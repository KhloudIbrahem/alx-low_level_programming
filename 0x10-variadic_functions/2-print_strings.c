#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * @...: strings to be printed.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *s;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strs, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
