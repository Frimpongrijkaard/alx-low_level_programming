#include "main.h"

/**
 * _strncat- concatenat string with n numbers
 * @dest: destination string
 * @src: source string
 * @n: number of bytes in memory
 *
 * Return: return string to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; j < n && src[j] != '\0'; ++i, ++j)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
