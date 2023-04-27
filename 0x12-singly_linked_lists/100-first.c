#include <stdio.h>

/**
* my_fun - print string befor main.
*/

void __attribute__ ((constructor)) my_fun(void)

{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
