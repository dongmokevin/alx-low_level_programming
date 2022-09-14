#include "main.h"

/**
 * _isalpha - Returns 1 ifit is a letter otherwise 0
 * @c: letter being tested
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
