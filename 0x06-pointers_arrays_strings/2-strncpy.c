/**
 * _strncpy - copies a string into another string by n Bytes
 * @src: source string
 * @dest: destination string
 * @n: number of bytes
 * Return: pointer to the first element of the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	/* copies character from src to dest provide conditions are true*/
	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];
	/* puts null value to positions after those from src*/
	for (; m < n ; m++)
		dest[m] = '\0';
	return (dest);
}
