
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int a, i;

	while (a <= 8)
	{
		for (a = 0; a <= 8; a++)
		{
			for (i = a + 1; i < 10; i++)
			{
				putchar((a % 10) + '0');
				putchar((i % 10) + '0');
				if (i > 9)
					continue;
				if (a == 8)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
