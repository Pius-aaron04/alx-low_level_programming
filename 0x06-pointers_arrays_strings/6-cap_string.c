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
				if (*s == '\t')
				{
					*s = ' ';
					s++;
				}
				else
					s++;
				if (*s == ' ' || *s == '\n' || *s == '\t' ||
						(*(s - 1) == '\t'))
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
