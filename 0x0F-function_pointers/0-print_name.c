#include <stdio.h>

/**
* print_name - Function to print name
* @name: name to be printed
* @f: pointer to a function
*
* Return: void
*/


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
