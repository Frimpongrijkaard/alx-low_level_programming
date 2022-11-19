#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers- print numbers followed by new line
 * @separator: the string to be separated between numbbers
 * @n: number of intger passed on to function
 * @...: variable numbers to printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int indx;

	va_start(numbers, n);

	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(numbers, int));

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
