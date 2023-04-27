#include <stdio.h>

/**
* my_fun - print string befor main.
*/

void my_fun(void) __attribute__ ((constructor));
void my_fun(void)
{
printf("Youre beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
