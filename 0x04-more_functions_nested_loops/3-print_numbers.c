#include "main.h"

/**
* print_numbers - prints the numbers, from 0 to 9
* add a new line 
*
* Return: 0
*/

void print_numbers(void)
{
for (x = 0; x <= 10; x++)
{
_putchar((x % 10) + '0');
_putchar('\n');

return (0);
}
