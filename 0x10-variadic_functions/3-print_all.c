#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>


/**
* ptr_str - print a string type or (nil) if empty/NULL;
* @x: a va_list struct to process;
*/

void ptr_str(va_list x)
{
char *r;

r = va_arg(x, char *);
switch (!r)
{
case 0:
printf("%s", r);
break;
case 1:
printf("(nil)");
break;
}
}

/**
* ptr_flo - prints a double type;
* @x: a va_list struct to process;
*/

void ptr_flo(va_list x)
{
printf("%f", va_arg(x, double));
}

/**
* ptr_char - print a char type;
* @x: a va_list struct to process;
*/


void ptr_char(va_list x)
{
printf("%c", va_arg(x, int));
}

/**
* ptr_int - print a integer type;
* @x: a va_list struct to process;
*/

void ptr_int(va_list x)
{
printf("%d", va_arg(x, int));
}
/**
* print_all - print all argument that match with format.
* @format: type to print out.
* @...: arguments to print.
*/


void print_all(const char * const format, ...)
{
int c, n;
va_list x;

p_op ops[] = {
{"c", ptr_char},
{"i", ptr_int},
{"f", ptr_flo},
{"s", ptr_str},
{NULL, NULL}
};

va_start(x, format);

c = n = 0;
while (format && format[n])
{
c = 0;
while (ops[c].op)
{
if (ops[c].op[0] == format[n])
{
(ops[c].f)(x);
if (format[n + 1])
printf(", ");
}
c++;
}
n++;
}
putchar('\n');
va_end(x);
}






