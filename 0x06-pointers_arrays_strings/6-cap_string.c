/**
 * replace_tab - replaces tab with space
 * @c: char pointer
 */

void replace_tab(char *c)
{
	if (*c == '\t')
	{
		*c = ' ';
		c++;
		if (*c >= 97 && *c <= 122)
			c -= 32;
		else
			c++;
	}
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

	while (*s != '\0')
	{
		for (sep = separator; *sep != '\0'; sep++)
		{
			if (*s == *sep)
			{
				replace_tab(s);
				/* checks if current character is a whitespace */
				if (*s == ' ' || *s == '\n')
				{
					s++;
					if (*s >= 'a' && *s <= 'z')
					{
						*s -= 32;
						break;
					}
				}
				if ((*s >= 'a' && *s <= 'z') && (*(s - 1) == *sep))
				{
					*s -= 32;
					break;
				}
			}
		}
		s++;
	}
	return (str);
}
