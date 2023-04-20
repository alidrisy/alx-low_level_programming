#include "3-calc.h"

/**
* get_op_func - selects the correct function to perform the operation
* @s: the operation
* Return : null or the right function
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0

while (ops[i].op != NULL && s[1] == 0)
{
if (ops[i].op[0] == *s)
return ((ops[i].f));
i++;
}
return (NULL);
}
