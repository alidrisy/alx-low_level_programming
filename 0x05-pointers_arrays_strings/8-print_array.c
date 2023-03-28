#include "main.h"
#include<stdio.h>

/**
* print_array - prints n elements of an array of integers
* @n: a number of elements in arrays
* @a: a pointer that will stored arrays
*/
void print_array(int *a, int n)
{
int x, c;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
for (c = 0; c < n; c++)
if (c < x)
printf(", ");
}
}
