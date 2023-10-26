#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * bNum: declared variable
 * Return: bNum or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bNum = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		bNum = (bNum << 1) | (*b - '0');
		b++;
	}

	return (bNum);
}
