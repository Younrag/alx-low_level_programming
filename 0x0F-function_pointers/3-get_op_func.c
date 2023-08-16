#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * @s operator passed as argument
 */

int (*get_op_func(char *s))(int, int)
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

	while (i < 6)
	{
		if (*s == ops[i].op)
			get_op_func = ops[i].f;
	}
}
