#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a an long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of an long long: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of an float: %lu bytes(s)\n", (unsigned long)sizeof(e));

	return (0);
}
