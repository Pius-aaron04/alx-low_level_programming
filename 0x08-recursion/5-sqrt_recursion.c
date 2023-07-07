/**
 * _helper_sqrt - searches for the square root of
 * @start: entry search point
 * @end: end point
 * @n: integer
 * Return: returns an integer
 */

int _helper_sqrt(int n, int start, int end)
{
	int mid, square;

	if (start > end)
		return (-1);
	mid = start + (end - start) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (_helper_sqrt(n, mid + 1, end));
	else
		return (_helper_sqrt(n, start, mid - 1));
}

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_helper_sqrt(n, 0, n));
}
