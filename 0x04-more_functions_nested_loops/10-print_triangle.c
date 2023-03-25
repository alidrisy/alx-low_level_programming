#include "main.h"

/**
* print_triangle - print line.
*@size: the number of # character.
*/
void print_triangle(int size);
{
int x, c, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (c = size - x; c > 0; c--)
_putchar(' ');
if (x >= 0)
{
for (z = 0; z <= x; z++)
_putchar('#');
}

_putchar('\n');
}

}
}
