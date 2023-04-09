#include "main.h"
#include <unistd.h>

/**
* _putchar - print a string
* @c: char
*Return: c
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
