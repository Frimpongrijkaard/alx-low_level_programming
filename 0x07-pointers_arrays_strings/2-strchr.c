#include "main.h"

/**
 * _strchr- locate string of character
 * @s: string
 * @c: character to be located
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
