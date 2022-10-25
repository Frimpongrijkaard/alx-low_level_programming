#include "main.h"
/**
 * _puts- prints a string
 * @str: string to be display
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
