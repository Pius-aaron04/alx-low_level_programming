#include "3-calc.h"

/**
 * get_op_func - gets appropriate function for operation
 * @s: string pointer
 * Return: pointer to appropriate function
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_div},
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i].symbol))
			return (ops[i].op);
		i++;
	}
	return (NULL);
}
