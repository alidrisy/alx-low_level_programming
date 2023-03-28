#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line.
* @str: a variable string
*/
void puts_half(char *str)
{
int x = 0, c;
while (str[x] != 0)
{
x++;
}
for (c = (x / 2); c < x; c++)
_putchar(str[c]);
_putchar(n);
}
