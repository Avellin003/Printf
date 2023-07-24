#include <stdio.h>
#include "main.h"
/**
 * print_string - function prints string to stdout
 * @str: pointer to a string
 * Return : void
 */
void print_string(char *str)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		char *ptr = "(null)";

		for (i = 0; ptr[i] != '\0'; ++i)
		{
			_putchar(ptr[i]);
		}
	}
}
