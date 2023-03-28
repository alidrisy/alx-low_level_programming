#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: a variable string
*/
void puts2(char *str)
{
int x = 0, c = 0;
while (str[x] != 0)
{
x++;
}
for(c = 0; c < x; c += 2)
_putchar(str[c]);
_putchar('\n');
}
