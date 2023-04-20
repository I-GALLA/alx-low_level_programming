#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, size_t n)
{
	char *result;
	size_t s1_len, s2_len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] && s2_len < n; s2_len++)
		;

	result = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		result[i + s1_len] = s2[i];

	result[s1_len + s2_len] = '\0';

	return (result);
}
