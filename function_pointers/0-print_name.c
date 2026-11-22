#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the provided function
 * @name: the name to print
 * @f: function to call to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
