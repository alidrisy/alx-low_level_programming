#include "main.h"



/**
* print_alphabet - prints the alphabet in lowercase ten times, followed by a new line.
*/
void print_alphabet_x10(void);
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

