#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string.
 * Return: nothing.
 */
void puts_half(char *str)
{
	int len = 0;
	int o, i;

	for (o = 0; str[o] != '\0'; o++)
		len++;
	i = len / 2;
	if ((len % 2) == 1)
		i = (len + 1) / 2;
	for (o = i; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
