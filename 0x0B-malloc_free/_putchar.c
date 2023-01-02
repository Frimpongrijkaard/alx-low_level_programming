#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: the cgarater to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno ist set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
