#include<stdio.h>

/**
* main - prints the alphabet in lowercase
* use just putchar
*
* Return: Always 0.
*/
int main(void)
{
char letter;
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
