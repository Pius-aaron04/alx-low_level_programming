/**
 * _memcpy - copies memory block from a source to destination
 * memory block
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
