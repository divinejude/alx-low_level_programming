#include "main.h"

/**
 * print_array - Prints n elements of an array.
 * @a: Array name.
 * @n: Number of elements to be printed.
 *
 * Description: This function takes an input array and the number of elements
 *              to be printed. It iterates over the array and prints the
 *              elements using the printf function. Each element is separated
 *              by a comma and a space, except for the last element, which is
 *              printed without the comma and space. Finally, a new line is
 *              printed after all the elements.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < (n - 1); i++)
    {
        printf("%d, ", a[i]);
    }

    if (i == (n - 1))
    {
        printf("%d", a[n - 1]);
    }

    printf("\n");
}

