#include "main.h"

/**
* print_numbers - Prints the numbers from 0-9.
*/


void print_numbers(void)
{
int number;

for (number = 48; number <= 57; number++)
{
_putchar(number + '0');
}

_putchar('\n');
}
