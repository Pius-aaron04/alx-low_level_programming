/**
 * leet - encodes specific character of sa string
 * @str: string/char pointer parameter
 * Return: Pointer to str
 */

char *leet(char *str)
{
	/* initialized three strings for mapping characters by index*/
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char code[] = "43071";
	char *c = str; /* retains the pointer to first charcter of the string*/
	int i; /* control iteration for elements in mapping arrays*/

	while (*str != 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == lower[i] || *str == upper[i])
				*str = code[i];
		}
		str++;
	}
	return (c);
}
