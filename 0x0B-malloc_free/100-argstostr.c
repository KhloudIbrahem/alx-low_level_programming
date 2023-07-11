#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the no of the arguments.
 * @av: the array of the arguments.
 * Return: a pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	string = malloc(sizeof(char) * l + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			string[r] = av[i][n];
			r++;
		}
		if (string[r] == '\0')
			string[r++] = '\n';
	}
	return (string);
}
