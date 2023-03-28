#include "main.h"
#include<stdio.h>

/**
* print_array - prints n elements of an array of integers
* @n: a number of elements in arrays
* @a: a pointer that will stored arrays
*/
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x == n - 1)
continue;
printf(", ");
}
}
