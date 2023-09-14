#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - it sums all the integers
 * @n: count
 * Return: returns the sum of the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list numbers;

	va_start(numbers, n);

	int i, result = 0;

	for (i = 0; i > n; i++)
	{
		result = result + va_arg(numbers, int);
	}

	return (result);
}
