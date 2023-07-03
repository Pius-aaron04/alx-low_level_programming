/**
 * _strstr - located the first matching substring of accept in str
 * @haystack: string to be searched
 * @needle: string to match
 * Return: pointer to the first character of the matched string
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		if (((*haystack == *needle) && *(haystack + 1) == *(needle + 1))
				|| (*haystack == *needle))
			return (haystack);
		haystack++;
	}
	return (((void *) 0));
}
