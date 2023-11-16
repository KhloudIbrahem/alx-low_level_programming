#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the characters in stdout.
 * @c: the character.
 * Return: 1 in success and 0 in error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
