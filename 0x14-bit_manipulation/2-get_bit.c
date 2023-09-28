#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The value.
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
