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

		if (*str == 'e' || *str == 'E')
			*str = '3';
		if (*str == 'o' || *str == 'O')
			*str = '0';
		if (*str == 't' || *str == 'T')
			*str = '7';
		if (*str == 'l' || *str == 'L')
			*str = '1';
	}
	return (c);
}
