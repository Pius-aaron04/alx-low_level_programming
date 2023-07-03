/**
 * _memset - fills n memory with const bytes by b
 * @s: char pointer
 * @b: const char bytes
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
