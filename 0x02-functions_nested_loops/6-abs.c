/**
 * _abs - return absolute value of n
 * @n: integer
 * Return: returns absolute of n
 */
int _abs(int n)
{
	int absolute;

	if (n < 0)
		absolute = -1 * n;
	else
		absolute = 1 * n;
	return (absolute);
}
