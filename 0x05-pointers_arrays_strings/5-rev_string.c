#include "main.h"
/** 
* rev_string - reverses a string.
* @s: is a string
*/

void rev_string(char *s)
{
int x = 0; c = 0;
char n;
while (s[c++])
{
x++;
}
for (c = x - 1; c >= (x/2); c--)
{
n = s[c];
s[c] = s[x - c - 1];
s[x - c - 1] = n;
}
}
