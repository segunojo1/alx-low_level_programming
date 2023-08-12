#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstNum;
	int secondNum;

	for (firstNum = 0; firstNum <= 9; firstNum++)
	{
		for (secondNum = firstNum + 1; secondNum <= 9; secondNum++)
		{
			putchar('0' + firstNum);
			putchar('0' + secondNum);

			if (firstNum == 8 && secondNum == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
