#include <stdio.h>

/**
 * main  - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i, limit, sum;

	sum = 0;
	for (i = 11; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	printf("\n");

	return (1);
}
