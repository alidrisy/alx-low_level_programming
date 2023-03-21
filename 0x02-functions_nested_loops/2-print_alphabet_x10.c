#include "main.h"



/**
* print_alphabet_x10 - prints the alphabet in lowercase ten times.
*/
void print_alphabet_x10(void)
{
char x, a = 0;
while (a < 10)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
a++;
}
}

