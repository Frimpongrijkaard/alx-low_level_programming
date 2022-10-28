#include "main"
/**
 * reverse_array- reverse ararray
 * @a: number of a
 * @n: number of size
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
	return (0);
}
