
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}

