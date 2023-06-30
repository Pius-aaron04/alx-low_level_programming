/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 * Return: string difference
 */

int _strcmp(char *s1, char *s2)
{
	char *t_s1 = s1;
	char *t_s2 = s2;

	while (*t_s1 != '\0' && *t_s2 != '\0')
	{
		if (*t_s1 != *t_s2)
		{
			return (*t_s1 - *t_s2);
		}
		t_s1++;
		t_s2++;
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	return (*t_s1 - *t_s2); /* if either of them ends */
}
