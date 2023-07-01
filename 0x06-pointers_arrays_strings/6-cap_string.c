/**
 * change_toupper - changes case to upper
 * @c: char pointer
 */

void change_toupper(char *c)
{
	if (*c >= 97 && *c <= 122)
		*c -= 32;
}

/**
 * cap_string - checks for word separator
 * @str: string to be capitalized
 * Return: pointer to s
 */

char *cap_string(char *str)
{
	char separator[] = {';', '.', ',', '!', '"', '(', ')',
		'{', '}', ' ', 10, 9, '?'};
	char *sep = separator;
	char *s = str;

	change_toupper(s);
	while (*s != '\0')
	{
		for (sep = separator; *sep != '\0'; sep++)
		{
			if (*s == *sep)
			{
				s++;
				if (*s == ' ' || *s == '\n' || *s == '\t')
				{
					s++;
					change_toupper(s);
					break;
				}

				change_toupper(s);
			}
		}
		s++;
	}
	return (str);
}
