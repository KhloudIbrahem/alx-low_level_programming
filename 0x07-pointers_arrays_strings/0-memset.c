#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: the memory.
 * @b: The bytes to fill it.
 * @n: the number of bytes to be filled.
 * Return: the filled memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
