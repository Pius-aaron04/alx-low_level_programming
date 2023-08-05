/**
 * get_endianness - gets endianness of a machine
 * Return: 1 of little endianness and 0 for big
 */

int get_endianness(void)
{
	int n = 1;
	char *s = (char *)&n;

	if (*s == 1)
		return (1);
	return (0);
}
