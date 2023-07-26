#include <stdio.h>
#include "main.h"
/**
 * print_string - function prints string to stdout
 * @str: pointer to a string
 * description: prints a string to stdout
 * Return: length of printed strign
 */
int print_string(const char *str)
{
	int i, len;

	i = 0;
	len = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
			len++;
		}
	}
	else
	{
		char *ptr = "(null)";

		for (i = 0; ptr[i] != '\0'; ++i)
		{
			_putchar(ptr[i]);
			len++;
		}
	}
	return (len);
}
