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
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[i]);
		if (array[i] == value)
		{
			return (x);
		}
	}
	return (-1);
}
