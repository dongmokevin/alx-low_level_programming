#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10x
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
