#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the string.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; *s != '\0'; i++)
	{
		len++;
		s++;
	}
	return (len);
}
