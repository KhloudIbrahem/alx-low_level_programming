#include "lists.h"
/**
 * _putchar - Prints the character in the stdout.
 * @c: the character.
 * Return: 1 in success or -1 in error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
