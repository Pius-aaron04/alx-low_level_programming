/**
 * _strpbrk - finds first character in s1 that matches any character in s2
 * @s1: string to scan
 * @s2: string whose character match is searched for
 * Return: pointer to character matched
 */
char *_strpbrk(char *s1, char *s2)
{
	char *c;

	while (*s1 != 0)
	{
		for (c = s2; *c != 0; c++)
		{
			if (*s1 == *c)
				return (s1);
		}
		s1++;
	}
	return (((void *)0));
}
