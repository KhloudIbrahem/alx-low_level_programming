#include "main.h"
/**
 * _putchar - Prints the character inthe stdout.
 * @c: the character.
 * Return: 1 in success and -1 in error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
