/**
 * _isdigit - checks for digit 0-9
 * @c: int character
 * A
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

/**
 * _atoi - converts a string to an integer
 * @str: the string to convert
 * Return: converted string else 0 if no number if found
 */

int _atoi(char *str)
{
	int i = 0, sign = 1, flag = 0;
	int result = 0;

	for (i = 0; str[i] != '\0' && flag != -1; i++)
	{
		if (str[i] == '-')
			sign *= -1;
		if (_isdigit(str[i]))
		{
			flag = 1;
			result *= 10;
			result += (str[i] - '0');
		}
		else if (flag == 1)
			flag = -1;
	}
	if (sign == -1)
		return (-1 * result);
	return (result);
}
