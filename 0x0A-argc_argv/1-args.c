#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: the no of the arguments.
 * @argv: the array of the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
