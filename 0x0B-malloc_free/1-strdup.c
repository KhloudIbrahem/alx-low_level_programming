#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory
 * which contains a copy of the string given as
 * a parameter.
 * @str: the string to be copied.
 * Return: a pointer to a newly allocated space in memory
 * contained
 * copy of the string.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, j;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;
	copy = malloc(sizeof(char) * (j + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	return (copy);
}
