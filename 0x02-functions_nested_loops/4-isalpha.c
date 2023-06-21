/**
 * _isalpha - checks if c is an alphabet
 * @c: int type parameter
 * Return: return 1 if c is an alphabet and 0 if c is not
 */
int _isalpha(int c)
{
	int status;

	if (c >= 65 || c <= 122)
	{
		if (!(c >= 91 && c <= 96))
			status = 1;
		else
			status = 0;
	}
	else if (c <= 64)
		status = 0;
	return (status);
}
