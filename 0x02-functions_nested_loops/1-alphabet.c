#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: 0 on success
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
