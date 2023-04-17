#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[])
{
int mul, num1, num2, n;

if (argc == 1 || argc == 2)
{
printf("Error\n");
exit (98);
}
for (n = 0; n < argc; n++)
{
if (argv[n] != NULL)
{
num1 = atoi(argv[1])
num2 = atoi(argv[2]);
mul = num1 * num2;
}
if (atoi(argv[n]) == 0)
{
printf("Error\n");
exit(98);
}
printf("%d\n", mul);
}
return (0);
}
