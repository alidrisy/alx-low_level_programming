#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: the parameters
* Return: 0 or the sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list x;
unsigned int s, i;

if (n == 0)
return (0);

va_start(x, n);

s = 0;
for (i = 0; i < n; i++)
s += va_arg(x, int);

va_end(x);

return (s);
}
