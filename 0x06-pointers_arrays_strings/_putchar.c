#include "main.h"
/**
 * _putchar - prints the character in the stdout.
 * @c: The character.
 * Return: 1 in success and -1 in error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
