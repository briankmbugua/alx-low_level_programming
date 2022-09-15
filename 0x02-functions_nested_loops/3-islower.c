#include "main.h"

/**
 * _islower - check for lowercase
 * @c: interger character that will be checked
 * Return: 1 if c is lowercase 0 if not lowercase
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
