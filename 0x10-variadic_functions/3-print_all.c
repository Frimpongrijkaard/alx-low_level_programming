#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all- print anything.
 * @format: list of types of arguments passed to the functions
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list val;
	unsigned int i = 0, m, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(val, format);
	while (format && format[i])
	{
		m = 0;
		while (t_arg[m])
		{
			if (format[i] == t_arg[m] && c)
			{
				printf(", ");
				break;
			} m++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(val, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(val, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(val, double)), c = 1;
				break;
			case 's':
				str = va_arg(val, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(val);
}
