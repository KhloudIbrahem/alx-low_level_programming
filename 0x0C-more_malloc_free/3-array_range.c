#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: the minimium element.
 * @max: the maxmium element.
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}
