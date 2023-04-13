#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to
 *
 * Return: pointer to the resulting string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int index1 = 0, index2 = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	len1++;
	while (s2 && s2[len2])
	len2++;

	if (n < len2)
	result = malloc(sizeof(char) * (len1 + n + 1));
	else
	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!result)
	return (NULL);

	while (index1 < len1)
	{
	result[index1] = s1[index1];
	index1++;
	}

	while (n < len2 && index1 < (len1 + n))
	result[index1++] = s2[index2++];

	while (n >= len2 && index1 < (len1 + len2))
	result[index1++] = s2[index2++];

	result[index1] = '\0';

	return (result);
}
