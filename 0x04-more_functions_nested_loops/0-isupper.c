#include "main.h"

/**
 * _isupper - a function to check for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase else 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
