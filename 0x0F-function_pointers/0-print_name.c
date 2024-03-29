#include "function_pointers.h"

/**
 * print_name - print a name.
 * @name: name of the person
 * @f: function pointer.
 *
 *
 * Return: no return.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
