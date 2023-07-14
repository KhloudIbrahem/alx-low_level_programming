#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * @n: no of bytes to be concat.
 * Return: pointer shall point
 * to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 &&  s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n >= len2)
		arr = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		arr = malloc(sizeof(char) * (len1 + n + 1));
	if (!arr)
		return (NULL);
	while (i < len1)
	{
		arr[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		arr[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		arr[i++] = s2[j++];
	arr[i] = '\0';
	return (arr);
}
