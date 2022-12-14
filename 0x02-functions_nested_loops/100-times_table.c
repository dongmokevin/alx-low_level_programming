#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times table starting with 0
 * @n: Input number
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d,   ", i * j);
			}
			printf("%d", i * n);
			printf("\n");
		}
	}
}
