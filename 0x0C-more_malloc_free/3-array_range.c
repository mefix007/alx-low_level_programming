#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(int));

	if (m == 0)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		m[i] = min + i;
	{
		return (a);
	}
}
