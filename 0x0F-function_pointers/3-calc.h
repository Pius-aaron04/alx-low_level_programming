#ifndef _FILE_NAME_H
#define _FILE_NAME_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_t - operator type
 */
typedef struct op_t op_t;

/**
 * struct op_t - structure for arithemetic operators
 * @symbol: operator symbol
 * @op: operator function pointer
 */

struct op_t
{
	char *symbol;
	int (*op)(int, int);
};

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mud(int a, int b);
#endif
