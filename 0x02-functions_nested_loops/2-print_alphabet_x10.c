#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		char letter2;

		for (letter2 = 'a'; letter2 <= 'z'; letter2++)
		{
			_putchar(letter2);
		}
	}
}
