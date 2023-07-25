#include <stdio.h>
#include "main.h"
/**
 * print_int - prints an integer to stdout
 * @x:argument
 * Return: 0 if success
 */
void print_int(int x, ...)
{
	char digits[10];
	int counter = 0;

	if (x == 0)
	{
		_putchar('0');
	}
	else if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	while (x > 0)
	{
		digits[counter++] = (x % 10) + '0';
		x /= 10;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		_putchar(digits[x]);
	}
}
