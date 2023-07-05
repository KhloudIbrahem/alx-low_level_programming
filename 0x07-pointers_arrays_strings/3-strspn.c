#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string.
 * @accept: the accepting bytes.
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int value;
	int i;

	value = 0;
	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				value++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (value);
		}
		s++;
	}
	return (value);
}
