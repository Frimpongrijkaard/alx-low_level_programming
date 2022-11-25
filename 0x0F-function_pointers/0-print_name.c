#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name- print names
 * @name: name to display
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
