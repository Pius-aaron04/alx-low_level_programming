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
	int num1, num2;

	/* checks the amount of arguments entered */
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	/* checks opearator entered if more than 1 */
	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		return (99);
	}
	/* converts strings */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/* initializes the pointer to operator function */
	op_ptr = get_op_func(argv[2]);
	/* checks for valid operation */
	if (op_ptr != NULL)
	{
		op_ptr(num1, num2);
		return (op_ptr(num1, num2));
	}

	printf("Error\n");
	return (99);
}
