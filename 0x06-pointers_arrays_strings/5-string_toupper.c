#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: array of characters.
 * Return: the array of uppercase characters.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
