#include "main.h"

/**
 * cap_string- catitalze all words
 * @s: string
 *
 * Return: pointer to strings
 */
char *cap_string(char *s)
{
	int i = 0, n;

	int cap_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + i) >= 97 && *(s + i) <= 122)
		*(s + i) = *(s + i) - 32;
	i++;
	while (*(s + i) != '\0')
	{
		for (n = 0; n < 13; n++)
		{
			if (*(s + i) == cap_words[i])
			{
				if ((*(s + (i + 1)) >= 97) && (*(s + (i + 1)) <= 122))
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
