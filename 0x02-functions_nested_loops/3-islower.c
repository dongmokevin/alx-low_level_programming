#include "main.h"

/**
 * _islower -Returns 1 if a number is lower case otherwise 0
 * @c: single letter input
 * Return: 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
