#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: the destination to copy.
 * @src: The string to be copied.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
		i++;
	for (; x < i; x++)
		dest[x] = src[x];
	dest[i] = '\0';
	return (dest);
}
