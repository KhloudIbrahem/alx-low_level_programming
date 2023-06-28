#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: the string.
 * Return: nothing.
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		len--;
		reverse = s[i];
		s[i] = s[len];
		s[len] = reverse;
	}
}
