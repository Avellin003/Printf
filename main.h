#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _vprintf(const char *format, va_list list);
int _putchar(char c);
void print_fmt_spec(char c, va_list list);
#endif
