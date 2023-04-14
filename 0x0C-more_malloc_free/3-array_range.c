#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *array_range - creates an array of integers.
* @min: int
* @max: int
* Return: the pointer
*/

int *array_range(int min, int max)
{
int *x;
int n;
if (min > max)
return (0);

n = max - min;
x = malloc(sizeof(int) * n + 1);
if (x == 0)
return (0);

while(max > min)
{
x[n] = max;
n--;
max--;
}
x[n] = min;
return (x);
}
