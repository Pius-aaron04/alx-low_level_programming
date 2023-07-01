/**
 * _strncat - appends n bytes of characters from src to dest
 * @src: source string
 * @dest: destination string
 * @n: number of Bytes
 * Return: pointer to the first element of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p_dest = dest; /* points to the first element of dest.*/
	int m;

	/* shifts the des to the end */
	while (*dest != '\0')
		dest++;
	for (m = 0; m < n; m++)
	{

		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p_dest);
}
