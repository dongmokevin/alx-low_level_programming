#include "main.h"

/**
 * print_last_digit -  prints the last digit of a numberr
 * @a: Input variable
 * Return: 0
 */

int print_last_digit(int a)
{
	int l;

	l = (a % 10);

	if (l < 0)
	{
		l = (-1 * l);
	}

	_putchar(l + '0');
	return (l);
}
