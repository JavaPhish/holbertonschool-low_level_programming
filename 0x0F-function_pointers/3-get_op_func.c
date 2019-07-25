#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int , int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	for (i = 0; ops[i] != NULL; i++)
	{
		if (ops[i] == s)
			return (ops[i]);
	}

	return (ops[i]);
}
