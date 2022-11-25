#include "main.h"

/**
 * _pow_recursion- power function x raise to y
 * @x: first number
 * @y: second number
 *
 * Return: -1 if y lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
