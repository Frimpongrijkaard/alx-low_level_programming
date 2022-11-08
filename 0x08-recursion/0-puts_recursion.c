#include "main.h"

/**
 * _puts_recursion- display the string
 * followed by a new line
 * @s: character string variable
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}
	else
	{
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
