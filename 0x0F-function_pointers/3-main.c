#include "3-calc.h"

int main(int argc, char *argv[])
{
int z, v, n, sum;
int (*x) (int, int);

if (argc < 4 || argc > 4)
{
printf("Error\n");
exit(98);
}

z = atoi(argv[1]);
v = atoi(argv[3]);

n = get_op_func(argv[2]);

if (n == NULL)
{
printf("Error\n");
return (99);
}

sum = n(z, v);

printf ("%d\n", sum);

return (0);
}
