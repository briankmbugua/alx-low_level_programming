#include "main.h"

/**
 * _isdigit - checks if is a digit
 *@c: to be checked
 *Return: 1 if c is a digit else 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
