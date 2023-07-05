/**
 * _pow_recursion - computes x to power y
 * @x: base integer.
 * @y: index
 * Return: x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
