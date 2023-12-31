#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: the array.
 * @size: size of the array.
 * @action: is a pointer to the function
 * you need to use.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL  || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
