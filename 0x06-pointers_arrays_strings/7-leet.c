/**
 * leet - encodes specific character of sa string
 * @str: string/char pointer parameter
 * Return: Pointer to str
 */

char *leet(char *str)
{
	int l = 0;
	int x;
	char *c = str;

	while (*str != 0)
	{
		str++;
		l++;
	}
	str = c;

	for (x = 0; x <= l; x++)
	{
		if (str[x] == 'a' || str[x] == 'A')
			str[x] = '4';

		if (str[x] == 'e' || str[x] == 'E')
			str[x] = '3';
		if (str[x] == 'o' || str[x] == 'O')
			str[x] = '0';
		if (str[x] == 't' || str[x] == 'T')
			str[x] = '7';
		if (str[x] == 'l' || str[x] == 'L')
			str[x] = '1';
	}
	return (str);
}
