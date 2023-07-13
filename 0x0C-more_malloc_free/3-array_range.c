#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates_an_array_of_integers
 * @min: minimum_range_of_values_stored
 * @max: maximum_range_of_values_stored_and_number_of_elements
 *
 * Return: returns_pointer_to_the_new_array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
