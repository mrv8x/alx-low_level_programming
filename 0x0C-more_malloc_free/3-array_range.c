#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @minimum: minimum range of values stored
 * @maximum: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int minimum, int maximum)
{
	int *arr;
	int index, size;

	if (minimum > maximum)
	return (NULL);

	size = maximum - minimum + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	return (NULL);

	for (index = 0; minimum <= maximum; index++)
	arr[index] = minimum++;

	return (arr);
}
