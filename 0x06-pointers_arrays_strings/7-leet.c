/**
 * leet - encodes specific character of sa string
 * @str: string/char pointer parameter
 * Return: Pointer to str
 */

char *leet(char *str)
{
	char *c = str;

	for (; *str != '\0'; str++)
	{
		if (*str == 'a' || *str == 'A')
			*str = '4';

		else if (*str == 'e' || *str == 'E')
			*str = '3';
		else if (*str == 'o' || *str == 'O')
			*str = '0';
		else if (*str == 't' || *str == 'T')
			*str = '7';
		else if (*str == 'l' || *str == 'L')
			*str = '1';
	}
	return (c);
}
