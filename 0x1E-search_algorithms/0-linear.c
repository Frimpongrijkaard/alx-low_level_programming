#include "search_algos.h"

/**
 * linear_search - searches a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: array given
 * @size: size of the array
 * @value: value to search 
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
	{
		return (-1);
	}

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%li] = [%i]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
