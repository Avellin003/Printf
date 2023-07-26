#include "main.h"
/**
  * _printf - prints formated string to stdout
  * @format: placeholder string
  * description: prints formated string to stdout
  * Return: number of characters printed
 */



int _printf(const char *format, ...)
{
	int len;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	len = _vprintf(format, args);
	va_end(args);
	return (len);
}




