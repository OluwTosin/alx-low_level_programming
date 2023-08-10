#include <stdio.h>

/**
 * main - taking this as the main
 *
 * Return: will be 0 when it is sucessfull
 */

int main(void)
{
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of a int: %lu byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(long int));
printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
printf("Size of a float: %lu byte(s)", sizeof(float));
return (0);
}
