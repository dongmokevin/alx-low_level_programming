#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * return: 0
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'z'; low >= 'a'; low--)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
