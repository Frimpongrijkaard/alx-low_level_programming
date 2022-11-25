#include "main.h"

/**
 * _strcpy- copis the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*(src + n) != '\0')
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = '\0';
	return (dest);
}
