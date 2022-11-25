#include "main.h"

/**
 * _memset- fills the first n byte of memory area
 * @s: pointed to by s
 * @b: with the constant byte b
 * @n: n size of bytes of a memory
 *
 * Return: ponter to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
