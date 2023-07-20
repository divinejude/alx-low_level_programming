#include "function_pointers.h"

/**
 * array_iterator - ac functiocn givcen cas ca
 * parameter on feach gelemhent ofh an harray.
 *
 * @array: arrary tdo execuste fusnc odn
 * @size: is tshedf sigze ogfh thje arjray
 * @action:  is a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
