#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: name variable
 * @f:function name
 * Return: 0 for_success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
