#include "main.h"


/**
* _vprintf - writes characters to stdout
* @format: string to write from
* @list: va_list arguments
* description: writes characters to stdout
* Return: number of characters written
*/

/*
  * The function supports two modes
  * 0: normal mode prints character
  * 1: format mode print format character
*/
int _vprintf(const char *format, va_list list)
{
	int num_char_prted, mode;

	num_char_prted = 0;
	mode = 0;
	/*loop through the string*/
	while (*format)
	{
		/*check mode*/
		if (mode == 0)
		{
			/*check if i have met a % sign*/
			if (*format != '%')
			{
				_putchar(*format);
				num_char_prted++;
			}
			else
			{

				mode = 1;
			}
		}
		else
		{
			print_fmt_spec(*format, list, &num_char_prted);
			/*set mode to 0 and resume normal printing*/
			mode = 0;
		}
		format++;
	}
	/*return the number of characters printed*/
	return (num_char_prted);
}
/**
* print_fmt_spec - writes characters to stdout
* @c: character specifier
* @list: va_list argument
* @len: num of characer printed
* description: writes characters to stdout
* Return: nothing
*/


void print_fmt_spec(char c, va_list list, int *len)
{
	switch (c)
	{
		case 'c':
		/*get character from va_list */
			_putchar(va_arg(list, int));
			(*len)++;
			break;
		case 'i':
			print_integer(va_arg(list, int));
			break;
		case 'd':
			print_int(va_arg(list, int));
			break;
		case 's':
			*len += print_string(va_arg(list, const char *));
			break;
		case '%':
			print_per_sign();
			(*len)++;
			break;
	}
}
