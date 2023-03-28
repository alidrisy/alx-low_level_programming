#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: a string variable 
*/
void print_rev(char *s)
{
printf("%s\n", strsep(s));
}
