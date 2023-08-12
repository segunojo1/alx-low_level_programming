#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 89; num++)
	{
		if (num < 10)
		{
			putchar('0' + '0' + num);
		}
		else
		{
			putchar('0' + num);
		}
		if (num < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
