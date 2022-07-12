#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * _printf - a function that prints
 * @format: pointer
 *
 * Return: integer value
 */
int _printf(const char *format, ...)
{
va_list args;
int we, a[12], x, i = 0, n;
va_start(args, format);
we = vfprintf(stdout, format, args);
if (format[i] == 'b')
{
int y = va_arg(args, int);
for (x = 0; n > 0; x++)
{
a[x] = n % 2;
n = n / 2;
}
for (x = x -1; x >= 0; x++)
{
y = a[x];
return (y);
}
}
va_end(args);
return (we);
}
