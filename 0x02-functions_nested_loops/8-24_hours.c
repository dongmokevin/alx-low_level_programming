#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int min, sec;

	for (min = 0; min < 60; min++)
	{
		if (min < 10)
			_putchar('0' + min);
		else
			_putchar(min);

		_putchar(':');

		for (sec = 0; sec < 60; sec++)
		{
			if (sec < 10)
				_putchar('0' + sec);
			else
				_putchar(sec);
		}
		_putchar('\n');
	}
}
