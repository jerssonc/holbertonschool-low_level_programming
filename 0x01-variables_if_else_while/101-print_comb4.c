
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int a;
	int b = 49;
	int c = 50;

	for (a = 48; a <= 55; ++a)
	{
		for (b = a + 1; b <= 56; ++b)
		{
			for (c = 50; c <= 57; ++c)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

