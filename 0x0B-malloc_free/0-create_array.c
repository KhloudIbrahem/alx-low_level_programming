#include "main.h"
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of the array.
 * @c: the specific character.
 * Return: the a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int i;

	chars = malloc(sizeof(char) * size);
	if (size == 0 || chars == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		chars[i] = c;
	return (chars);
}
