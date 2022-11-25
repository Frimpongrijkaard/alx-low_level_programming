#include "main.h"

/**
 * _strpbrk- search for string of string of byte
 * @s: entire string
 * @accept: byte instring accept
 *
 * Return: ponter to byte in s and NULL
 * if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
