#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: the name.
 * @f: the pointer to the name.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
