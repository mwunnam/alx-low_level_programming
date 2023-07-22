#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - The function that does the printing
 *
 * @name: the parameter to be passed
 *
 * @f: parameter that is a functon pointer
 *
 * Return: 0
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
