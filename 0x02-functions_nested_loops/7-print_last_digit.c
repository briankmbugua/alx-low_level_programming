#include "main.h"
/**
 * print_last_digit - prints the last digit of a given number
 * @x: number to extract last digit from
 * Return: the last digit
 */
int print_last_digit(int x)
{

	int y;

	if (x < 0)
	x = -x;

	y = x % 10;

	if (y < 0)
		y = -y;
	_putchar(y + '0');

	return (y);
}
