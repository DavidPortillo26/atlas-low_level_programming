/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int mul(int a, int b)
{
	int result = 0;
	int sign = (a < 0) ^ (b < 0) ? -1 : 1; /* Determine the sign of the result */

	/* Take the absolute values for the multiplication */
	a = (a < 0) ? -a : a;
	b = (b < 0) ? -b : b;

	/* Perform multiplication using addition */
	while (b > 0)
	{
		result += a;
		b--;
	}

	return (sign * result);
}
