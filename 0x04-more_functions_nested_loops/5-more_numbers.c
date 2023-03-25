#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
*/

void more_numbers(void)
{
int x, i = 0;
while (i <= 10)
{
for(x = 0; x <= 14; x++)
{
_putchar((x % 10) + 0);
if (x > 9)
_putchar(1);
}
_putchar(n);
i++;
}
}
