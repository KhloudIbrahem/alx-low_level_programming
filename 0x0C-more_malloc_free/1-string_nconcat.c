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
	unsigned int i, j, len1 = 0, len2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	/**
	 * arr = malloc(sizeof(char) * (i + j + 1));
	 * if (arr == NULL)
	 * return (NULL);
	 */
	if (n >= len2)
		arr = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		arr = malloc(sizeof(char) * (len1 + n + 1));
	if (!arr)
		return (NULL);
	for (i = 0; i < len1; i++)
		arr[i] = s1[i];
	for (j = 0; n < len2 && i < (len1 + n);)
		arr[i++] = s2[j++];
	for (j = 0; n >= len2 && i < (len1 + len2);)
		arr[i++] = s2[j++];
	arr[i] = '\0';
	return (arr);
}
