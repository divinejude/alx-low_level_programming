#include "main.h"

/**
 * _realloc - reallocates function
 *
 * @ptr: pointerto
 * @old_size:is thesize,in_bytes,of_the_allocated_space_for_ptr
 * @new_size: the_new_size,in_bytes_of_the_new_memory_block
 *
 * Return: return_pointer_allocate_new_size_memory,or_NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
