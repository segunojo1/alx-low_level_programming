#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: numbeer to get factorial
 * Return: factorial of the num
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
