#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;
	unsigned int count = 0;
	unsigned long int mask = 1;

	while (count < index && mask > 0)
	{
		mask <<= 1;
		count++;
	}

	if (count < index)
		return (-1);

	bit_val = (n & mask) ? 1 : 0;

	return (bit_val);
}
