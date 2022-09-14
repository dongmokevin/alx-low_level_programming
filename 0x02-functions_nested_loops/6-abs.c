#include "main.h"

/**
 * _abs - computes the asolute vlaue of a number
 * @a: number input
 * Return: 0
 */

int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
