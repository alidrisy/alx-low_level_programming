#include <stdio.h> 

  

 /** 

  * main - Prints the size of various types based on 

  *        the computer it is compiled and run on.. 

  * 

  * Return: Always 0. 

  */

int main(void)
{
char a;
int b;
fluot c;
printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (long)sizeof(b));
printf("Size of a long long int: %zu byte(s)\n", (long long)sizeof(b));
printf("Size of a flout: %zu byte(s)\n", (unsigned long)sizeof(c));
return (0);
}
