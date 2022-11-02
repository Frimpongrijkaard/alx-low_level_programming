#include "main.h"

/**
 * _strstr- locate a substring
 * @haystack: the entire string
 * @needle: substring
 *
 * Return: pointer to beginning of substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhay;
	char *pneed;

	while (*haystack != '\0')
	{
		bhay = haystack;
		pneed = needle;
		while (*haystack != '\0' && *pneed != '\0' && *haystack == *pneed)
		{
			haystack++;
			pneed++;
		}
		if (!*pneed)
			return (bhay);
		haystack = bhay + 1;
	}
	return (0);
}
