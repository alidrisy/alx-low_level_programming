#include "main.h"

/**
* reset_to_98 - takes a pointer to an int.
* @*n: an pointer
*/

void reset_to_98(int *n)
{
int x;
n = &x;
x = 98;
reset_to_98(x)
}
