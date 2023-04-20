#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line.
* @separator: is the string to be printed between numbers
* @n: is the number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list i;
unsigned int x;
char *z;

va_start(i, n);
for (x = 0; x < n; x++)
{
z = va_arg(i, char *);
if (z == NULL)
printf("(nil)");
else
printf("%s", z);
if (x < n - 1 && (separator))
{
printf("%s", separator);
}
}
putchar(n);
va_end(i);
}
