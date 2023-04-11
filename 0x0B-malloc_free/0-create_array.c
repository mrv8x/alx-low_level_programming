#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array
 */



char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b = 0;

	if (size == 0)
		return (NULL);

	a = (char *) malloc(sizeof(char) * size);

	if (a == NULL)
		return (0);

	while (b < size)
	{
		*(a + b) = c;
		b++;
	}

	*(a + b) = '\0';

	return (a);
}
