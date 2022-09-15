#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character to check if is alphabet
 * Return: 1 if c is a letter or zero it it's not
 */

int _isalpha(int c)

{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

{
return (1);

}

else
{
return (0);
}
}
