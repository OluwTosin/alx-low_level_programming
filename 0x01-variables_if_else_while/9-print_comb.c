#include <stdio.h>

/**
 * main - taking this as the main
 *
 * Return: will be 0 when it is sucessfull
 */

int main(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
if (i == 9)
putchar(i + '0');
else
putchar(i + '0');
putchar(',');
putchar(' ');
}
return (0);
}
