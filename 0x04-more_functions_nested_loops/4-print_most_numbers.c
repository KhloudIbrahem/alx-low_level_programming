#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9.
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
