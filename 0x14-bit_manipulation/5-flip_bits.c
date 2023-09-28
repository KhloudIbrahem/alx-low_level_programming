#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: 1st no.
 * @m: 2nd no.
 * Return: 1 in success and -1 in error.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int val;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		val = ex >> i;
		if (val & 1)
			count++;
	}
	return (count);
}
