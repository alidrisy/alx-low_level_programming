#include "main.h"

/**
*swap_int - swaps the values of two integers.
*@a: is the first integer to swap
*@b: is rhe second integer to swap
*
*Return: void
*/

void swap_int(int *a, int *b)
{
int x;
  
x = *a;
*a = *b;
*b = x;
}
