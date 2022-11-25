#include "main.h"

/**
 * _isdigit- check if paramete is number btn 0 to 9
 * @c: input number
 * Return: 1 if is a number (0 t0 9), 0 in other cas
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
