/**
 * first_digit - extracts the first digit of a number
 * @number: int type parameter
 * Return: int firstDigit
 */
int first_digit(int number)
{
	int n = number;

	while (n >= 10)
		n /= 10;
	return (n);
}
