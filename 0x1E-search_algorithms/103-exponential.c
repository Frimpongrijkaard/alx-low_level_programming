#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: array given
 * @size: size of the array
 * @value: value to search
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t n;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (n = 0; n < size; n++)
		printf("%s %d", (i == 0) ? ":" : ",", array[n]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: array given
 * @size: size of the array
 * @value: value to search 
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int ind;

	ind = recursive_search(array, size, value);

	if (ind >= 0 && array[ind] != value)
		return (-1);

	return (ind);
}

/**
 * exponential_search - searches for a value in an array of
 * integers using the Exponential search algorithm
 *
 * @array: array given
 * @size: size of the array
 * @value: value to search
 * Return: index of the number
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index, next;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	index = 1;

	while (array[index] < value && index < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		index *= 2;
	}

	next = (index >= size) ? (size - 1) : index;

	index /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)index, (int)next);

	result = binary_search(array + index, (next + 1) - index, value);

	if (result >= 0)
		result += index;

	return (result);
}
