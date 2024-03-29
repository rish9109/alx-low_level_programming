#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *x;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	x = malloc(sizeof(int) * size);

	if (x == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		x[i] = min++;

	return (x);
}
