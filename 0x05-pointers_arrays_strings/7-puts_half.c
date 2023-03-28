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
if (x % 2 == 1)
{
c = (x - 1) / 2;
c += 1;
}
else
{
c = x / 2;
}



for (; c < x; c++)
_putchar(str[c]);
_putchar('\n');
}
