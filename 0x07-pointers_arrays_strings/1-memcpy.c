#include "main.h"

/**
 * _memcpy- copy memory area
 * @dest: destination
 * @src: source memory area
 * @n: the size of bytes
 *
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		*(dest + m) = *(src + m);
	}
	return (dest);
}
