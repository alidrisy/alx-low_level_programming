#include "main.h"

/**
* _isalpha - checks for lowercase character.
* @c: a variable
* Return: if is alpha 1 else 0.
*/

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else

return (0);

}
