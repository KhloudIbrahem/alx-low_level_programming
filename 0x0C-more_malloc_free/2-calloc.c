#include "main.h"
/**
 * _memset - set memory to specific character
 * @s: the array.
 * @l: the character.
 * @n: the size.
 * Return: array.
 */
char *_memset(char *s, char l, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
		 s[i] = l;
	return (s);
}

/**
 * _calloc - allocates memory for an array
 * using malloc.
 * @nmemb: no of eleements.
 * @size: size of the array.
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, nmemb * size);
	return (arr);
}
