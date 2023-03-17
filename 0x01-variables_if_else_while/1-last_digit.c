#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
* main - Prints a random number and states whether
*        it is positive, negative, or zero.
*
* Return: Always 0.
*/
int main(void)
{
int n;
/* returne */
/* srand */
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
else if (n < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
else
printf("Last digit of %d is %d and is 0\n", n, n % 10);
return (0);
}
