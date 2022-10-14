#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that print name
 * @name: pointer
 * @f: function pointer
 *
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}