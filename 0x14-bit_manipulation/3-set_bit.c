#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int count = 0;

	while (count < index && mask > 0)
	{
		mask <<= 1;
		count++;
	}

	if (count < index)
		return (-1);

	*n = (*n | mask);
	return (1);
}
