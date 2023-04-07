#include "main.h"
int palind2(char *a, int l)
{
if (*a == 0)
return (l - 1);
return (palind2(a + 1, l + 1));
}

int palind3(char *a, int l)
{
if (*a != *(a + l))
return (0);
else if (*a == 0)
return (1);
return (palind3(a + 1, l - 2));
}

int is_palindrome(char *s)
{
int l;

l = palind2(s, 0);
return (palind3(s, l));
}

