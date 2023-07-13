#include "main.h"

/**
 * _calloc - func._that_allocates_memory_for_an_array_of_@nmemb_elements_of
 * @size arg._bytes_each_and_returns a pointer_to_the allocated memory.
 *
 * @nmemb: arg._that_allocate_memory_for_array
 * @size: arg._that_allocate_element_of_size_bytes
 *
 * Return: Return_a_pointer_to_the_allocated_memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
