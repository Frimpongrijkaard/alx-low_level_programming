#include "main.h"

/**
 * factorial- finding factorial of given number
 * @n: the number to be found
 *
 * Return: -1 to indicate error
 * n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
