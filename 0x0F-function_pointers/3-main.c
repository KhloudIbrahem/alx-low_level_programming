#include "3-calc.h"
/**
 * main - This function we have
 * a two number and an operator
 * @argc: Is the length of Number of arguments
 * @argv: These are the arguments
 * Return: Return to 0
 */
int main(int argc, char *argv[])
{
	int numb1, numb2;
	int (*fun)(int, int);
	char *c = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*c != '+' && *c != '-' &&
		*c != '*' && *c != '/' && *c != '%') ||
			*(c + 1) != 0)
	{
		printf("Error\n");
		exit(99);
	}
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[3]);
	if ((*c == '/' || *c == '%') && numb2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	fun = get_op_func(c);
	printf("%d\n", fun(numb1, numb2));
	return (0);
}
