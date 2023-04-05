#include "main.h"
/**
* _puts_recursion - print a strig followed by new line .
* @s: char
*/
void _puts_recursion(char *s)
{
if (*s != 0)
{
putchar(n);
}
else
{
putchar(*s);
s++;
_puts_recursion(s);
}
}
