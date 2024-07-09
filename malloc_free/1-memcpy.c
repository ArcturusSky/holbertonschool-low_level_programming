#include "main.h"

/**
 * _memcpy - Function allowing us to copy the memory area zone from one point
 * to another
 * @src: source zone
 * @dest: destination zone
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;
	/** Store the original pointer to return later */

	/**  Loop through each byte to copy from src to dest */
	while (n > 0)
	{
		*dest = *src;
		/** Copy the current byte from src to dest */
		dest++;
		/** Move dest pointer to the next byte */
		src++;
		/** Move src pointer to the next byte */
		n--;
		/** Decrement the count of bytes left to copy */
	}

	return (original_dest);
	/** Return the original destination pointer */
	}
