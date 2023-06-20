/**
 * _isalpha - checks if c is an alphabet
 * @c: int type parameter
 * Return: return 1 if c is an alphabet and 0 if c is not
 */
int _isalpha(int c)
{
	if (!(c < 65) || c >= 65 || c <= 122)
	{
		if (!(c >= 91 && c <= 96))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
