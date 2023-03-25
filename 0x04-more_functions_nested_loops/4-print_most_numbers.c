#include "main.h"

/**
* print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
*/

void print_most_numbers(void)
{

int number;

for (number = 48; number < 58; number++)
{
if (number != 50 && number != 52)
putchar(number + '0');
}

putchar('\n');
  return (0);
}
