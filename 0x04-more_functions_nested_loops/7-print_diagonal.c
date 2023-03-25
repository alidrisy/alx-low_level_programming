#include "main.h"

/**
* print_diagonal - print line.
*@n: the number of \ character.
*/
void print_diagonal(int n)
{
int x, z;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
if (x > 0)
{
for (z = 0; z < x; z++)
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

}
}
