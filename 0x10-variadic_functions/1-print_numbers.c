#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: is the string to be printed between numbers
* @n: is the number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list i;
unsigned int x;
va_start (i, n);
v = 0;
for (x = 0; x < n; x++)
{
printf("%d", va_arg(i, int));

if (x < n - 1 && (separator))
{
printf("%s", separator);
}
}
putchar('\n');
va_end(i);
}
