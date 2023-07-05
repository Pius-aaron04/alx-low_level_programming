/**
 * _strlen_recursion - counts length of a string
 * @s: string to be counted
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != 0)
	{
		++l;
		s++;
		return (l + _strlen_recursion(s));
	}
	return (l);

}
