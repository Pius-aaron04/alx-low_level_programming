/**
 * _isalpha - checks if c is an alphabet
 * @c: int type parameter
 * Return: return 1 if c is an alphabet and 0 if c is not
 */
int _isalpha(int a)
{
	if (a >= 65 || a <= 122)
	{
		if !(a >= 91 && a <= 96)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
