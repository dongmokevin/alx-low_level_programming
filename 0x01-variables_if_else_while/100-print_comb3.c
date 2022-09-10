#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int y;
	int skipper = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (y = skipper; y <= '9'; y++)
		{
			if (i != y)
			{
				putchar(i);
				putchar(y);
				putchar(',');
				putchar(' ');
			}
		}
		skipper++;
	}
	putchar('\n');

	return (0);
}
