#include "main.h"
/**
 * _strlen_recursion - return the length of the string.
 * @s: the string.
 * Return: the length of it.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * comparsion - compare each letter in the string.
 * @s: the string.
 * @i: smallest iterator.
 * @j: largest iterator.
 * Return: 1 in success and 0 in error.
 */
int comparsion(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + comparsion(s, i + 1, j - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string.
 * Return: 1 in success and 0 in error.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparsion(s, 0, _strlen_recursion(s) - 1));
}
