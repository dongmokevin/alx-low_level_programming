#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: string being tested
 *
 */

void puts_half(char *str)
{
	int c, d, e;

	for (c = 0; str[c] != '\0'; c++)
	{
	}
	if ((c % 2) == 0)
	{
		for (d = c / 2; str[d] != '\0'; d++)
			_putchar(str[d]);
	}
	else
	{
		for (e = (c - 1) / 2; str[e] != '\0'; e++)
			_putchar(str[e + 1]);
	}
	_putchar('\n');
}
