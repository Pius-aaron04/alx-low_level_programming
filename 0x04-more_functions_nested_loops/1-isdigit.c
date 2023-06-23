/**
 * _isdigit - checks for digit 0-9
 * @c: int character
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	int result;

	if (c >= 48 && c < 58)
		result = 1;
	else
		result = 0;
	return (result);
}
