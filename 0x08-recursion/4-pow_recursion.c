#include "main.h"
/**
 * _pow_recursion - returns the power of x to y
 * @x: number to be raised to a power of y
 * @y: power to be raised
 * Return: pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}