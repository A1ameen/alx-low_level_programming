#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a pointer to a function.
 * @name: The string to print.
 * @f: A pointer to a function that takes a char* parameter.
 * Return: Nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
