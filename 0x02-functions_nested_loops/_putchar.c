#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints characters in stdout.
 * @c: The character to be printed.
 * Return: 1 in success and -1 in error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
