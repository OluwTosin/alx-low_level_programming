#include <stdio.h>
#include <stdlib.h>

/**
* main - that mutiplies two number
* @argc: argument count
* @argv: argument v
* Return: 0
*/

int main(int argc, char *argv[])
{
int mul = 0, num1, num2;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

mul = num1 *num2;
printf("%d\n", mul);
}
return (0);
}
