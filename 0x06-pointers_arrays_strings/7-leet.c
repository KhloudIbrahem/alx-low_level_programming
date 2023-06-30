#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: the array of characters.
 * Return: The encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == arr1[j])
				s[i] = arr2[j];
		}
	}
	return (s);
}
