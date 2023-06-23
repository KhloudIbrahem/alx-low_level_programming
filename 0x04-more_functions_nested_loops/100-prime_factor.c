#include <math.h>
#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 * Return: 0 in success.
 */
int main(void)
{
	long i, maxfact;
	long num =  612852475143;
	double sqr = sqrt(num);

	for (i = 1; i <= sqr; i++)
	{
		if (num % i == 0)
			maxfact = num / i;
	}
	printf("%ld\n", maxfact);
	return (0);
}
