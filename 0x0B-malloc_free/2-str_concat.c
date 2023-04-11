#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @str1: string to concatenate
 * @str2: other string to concatenate
 *
 * Return: pointer to the new string created
 */
char *str_concat(char *str1, char *str2)
{
	char *str3;
	unsigned int index1 = 0, index2 = 0, len1 = 0, len2 = 0;

	while (str1 && str1[len1])
		len1++;
	while (str2 && str2[len2])
		len2++;

	str3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str3 == NULL)
		return (NULL);

	index1 = 0;
	index2 = 0;

	if (str1)
	{
		while (index1 < len1)
		{
			str3[index1] = str1[index1];
			index1++;
		}
	}

	if (str2)
	{
		while (index1 < (len1 + len2))
		{
			str3[index1] = str2[index2];
			index1++;
			index2++;
		}
	}
	str3[index1] = '\0';

	return (str3);
}
