#include "main.h"
/**
 * print_alphabet- entry point
 * @c- charater to be checked
 *
 * Return: no return.
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
