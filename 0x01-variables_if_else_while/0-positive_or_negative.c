#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
* main - print a type of number 
* postive, negative or zero 
*
* return for zero time 
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("enter a number: ");
scanf("%d" , &n);
if (n > 0) {
printf("%d is positive\n" , n); }
else if (n == 0) {
printf("%d is zero\n" , n); }
else {
printf("%d is negative\n" , n); }
return (0);
}
