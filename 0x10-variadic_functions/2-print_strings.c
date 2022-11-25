#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- print strings
 * @separator: separate the strings
 * @n: number of strings passed to function
 *
 * Return: no number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;
	char *str;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(var, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(var);
}
