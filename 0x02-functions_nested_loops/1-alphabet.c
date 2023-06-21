#include "main.h"
/**
 * print_alphabet - prints alphabet lowercase.
 * Return: nothing to return.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
