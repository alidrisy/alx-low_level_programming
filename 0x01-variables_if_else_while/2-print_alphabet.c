#include<stdio.h>

/**
* main - prints the alphabet in lowercase
* use just putchar
*
* Return: Always 0.
*/
int main(void)
char x;
for (x = 'a'; x <= 'z'; x++)
{
x = tolower (x);
putchar(x);
  }
return (0);
}
