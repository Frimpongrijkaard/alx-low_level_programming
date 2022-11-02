#include "main.h"

/**
 * print_diagsums- print the sum of two diagonal
 * @a: integer number
 * @size: integer size
 *
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}
	print("%d, %d\n", sum1, sum2);
}
