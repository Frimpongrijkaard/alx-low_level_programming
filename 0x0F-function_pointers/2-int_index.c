#include "function_pointers.h"

/**
 * int_index- earches for an integer
 * @array: array to search
 * @size: array size
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element the cmp does return 0 or -1
 * or size of negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]) != 0)
				return (n);
		}
	}
	return (-1);
}
