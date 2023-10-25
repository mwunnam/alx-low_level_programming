#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func  - Function that get the operator to use
*
* @s: sign for the operator
*
* Return: NULL
*
*/

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_add},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};


	if (s != NULL && s[1] == '\0')
	{
		i = 0;

		while (ops[i].op != NULL && *(ops[i].op) != *s)
			i++;

		return (ops[i].f);
	}
return (NULL);
}
