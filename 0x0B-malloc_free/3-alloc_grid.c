#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: int
* @height: int
* Return: tho pointer or NULL
*/

int **alloc_grid(int width, int height)
{
int **x;
int i, c, z;

if (width <= 0 || height <= 0)
return (NULL);

x = (int **)malloc(sizeof(*x) * height);
if (x == NULL)
{
return (NULL);
}
for (z = 0; z < height; z++)
{
x[z] = (int *)malloc(sizeof(int) * width);
if (x[z] == NULL)
{
while (z--)
free(x[z]);
free(x);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (c = 0; c < width; c++)
x[i][c] = 0;

return (x);
}
