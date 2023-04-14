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
return (NULL);

n = max - min;
x = malloc(sizeof(*x) * n + 1);
if (x == NULL)
return (NULL);

while(max > min)
{
x[n] = max;
n--;
max--;
}
x[n] = min;
return (x);
}
