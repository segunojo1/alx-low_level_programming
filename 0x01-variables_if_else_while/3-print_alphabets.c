#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;
	int ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}

	putchar('\n');
	return (0);
}
