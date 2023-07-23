#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _vprintf(const char *format, va_list list);
int _putchar(char c);
void print_fmt_spec(char c, va_list list);
#endif
