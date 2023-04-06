#include "main.h"
int _prime(int n, int x);
/**
* is_prime_number - get the real square root of number
* @n: a number that have to get root
* Return: 0 if n is not prime number
*/
int is_prime_number(int n)
{
if (n < 0)
{
return (0);
}
else if (n == 0 || n == 1)
{
return (0);
}
else
return (_prime(n, 1));
}
/**
* _prime - return the 1 if it's prime number
* @n: the main number
* @x: an integer
* Return: 1 or 0
*/
int _prime(int n, int x)
{
if (x * x == n)
{
return (0);
}
else if (x * x > n || x * x < n)
{
return (1);
}
return (_prime(n, x + 1));
}
