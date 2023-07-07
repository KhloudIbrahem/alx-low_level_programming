#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: the no of the arguments.
 * @argv: the array of the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
