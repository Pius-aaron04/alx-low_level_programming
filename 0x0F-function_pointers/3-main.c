#include "3-calc.h"

/**
 * main - carries out arithemetic operations
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: result of operation
 */

int main(int argc, char *argv[])
{
	int (*op_ptr)(int, int); /* operator pointer */
	long int result, num1, num2;

	/* checks the amount of arguments entered */
	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	/* converts strings */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/* initializes the pointer to operator function */
	op_ptr = get_op_func(argv[2]);
	/* checks for valid pointer */
	if (op_ptr != NULL)
	{
		result = (long int)op_ptr(num1, num2);
		printf("%lu\n", result);
		return (result);
	}

	printf("Error\n");
	return (1);
}
