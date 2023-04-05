#include "main.h"
/**
* factorial - returns the factorial of a given number
* @n: int variable
* Return: n
*/
int factorial(int n)
{
if (n == 1)
{
return (0);
}
else
{
return (n * factorial(n + 1));
}
}
