/**
 * factorial - computes the factorial of integer n
 * @n: integer
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
