#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a, p;
	char character;

	for (a = '\0'; s[a] != 0; a++)
	{
	}
	p = 0;
	for (a = a - 1; p < a; p++)
	{
		character = s[a];
		s[a] = s[p];
		s[p] = character;
		a--;
	}
}
