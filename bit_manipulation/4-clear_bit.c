/**
 * clear_bit - Sets the bit at a given index to 0.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 on success, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
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
