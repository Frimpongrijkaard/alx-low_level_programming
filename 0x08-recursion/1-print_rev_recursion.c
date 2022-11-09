#include "main.h"

/**
 * _print_rev_recursion- print a string in a reverse
 * @s: character string
 *
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar("%c", *s);
	}
}