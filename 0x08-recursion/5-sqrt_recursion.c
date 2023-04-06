#include "main.h"
/**
* _sqrt_recursion - get the real square root of number
* @n: a number that have to get root
* Return: n root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
return (_root(n, i));
}
int _root(n, x)
{
if (x * x = n)
{
return (x);
}
else if (x * x > n)
{
return (-1);
}
return (_root(n, x + 1);
}
