/**
 * flip_bits - Counts the nb of bits needed to flip to convert.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) | (*b - '0');
		b++;
	}

	return (result);

}