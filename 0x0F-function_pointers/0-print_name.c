#include "function_pointers.h"

/**
 * print_name - Prints a name using the provided function
 * @name: The name to printed
 * @f: The function to use
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
