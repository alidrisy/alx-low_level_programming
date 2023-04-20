#include "3-calc.h"

int main(int argc, char *argv[])
{
int z, v, sum;
int (*x)(int, int);

if (argc < 4 || argc > 4)
{
printf("Error\n");
exit(98);
}

z = atoi(argv[1]);
v = atoi(argv[3]);

x = get_op_func(argv[2]);

if (x == NULL)
{
printf("Error\n");
return (99);
}

sum = x(z, v);

printf("%d\n", sum);

return (0);
}
