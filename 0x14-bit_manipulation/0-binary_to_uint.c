#include "main.h"

int _strlen(char *c)
{
int i;
for (i = 0; c[i]; i++)
;
return (i);
}

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: is pointing to a string of 0 and 1 chars
* Return: the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int i = 1;
unsigned int x = 0;
int n;
unsigned int s;

if (b == NULL)
return (0);

s = _strlen(b);

for (n = s - 1; n >= 0; n--)
{
if (b[n] != 0 && b[n] != 1)
return (0);
if (b[n] == 1)
{
x += i;
}

i *= 2;
}
return (x);
}
