#include <stdio.h>

/**
 * main - taking this as the main
 *
 * Return: will be 0 when it is sucessfull
 */

int main(void)
{
char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
putchar ('\n');
return (0);
}
