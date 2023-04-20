#include "3-calc.h"

/**
* op_add - add two number
* @a: int
* @b: int
* Return: the a sum of the numbers
*/

int op_add(int a, int b)
{
int x;
x = a + b;
return (x);
}

/**
* op_sub - subtraction two numbers
* @a: int
* @b: int
* Return:  the difference of a and b.
*/

int op_sub(int a, int b)
{
int x;
x = a - b;
return (x);
}

/**
* op_mul - multiply two numbers
* @a: int
* @b: int
* Return: the product of a and b.
*/

int op_mul(int a, int b)
{
int x;
x = a * b;

return (x);
}
/**
* op_div - division two numbers
* @a: int
* @b: int
* Return: the result of the division of a by b. 
*/
int op_div(int a, int b)
{
int x;
if (b == 0)
{
printf("Error\n");
exit(100);
}

x = a / b;
return (x);
}
/**
* op_mod - model two numbers
* @a: int
* @b: int
* Return: the result of the model of a by b. 
*/
int op_mod(int a, int b)
{
int x;

if (b == 0)
{
printf("Error\n");
exit(100);
}
x = a % b;
return (x);
}
