#include "main.h"

/**
 * _strncpy- copy string to another place
 * @dest: destination of string copy
 * @src: copied string to destination
 * @n: number of character copied
 *
 * Return: return to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
