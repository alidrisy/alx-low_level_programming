#include "main.h"
/**
* _puts - print a string
* @s: a character variable
*/
void _puts(char *s)
{
int i;
for (i = 0; *s != 0; i++)
{
_putchar(*s);
s++;
}
_putchar('\n');
}
