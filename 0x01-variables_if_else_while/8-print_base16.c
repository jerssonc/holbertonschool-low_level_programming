
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		{
			for (a = 'a'; a <= 'f'; a++)
			{
				putchar(a);
			}
		}
	}
	putchar('\n');
	return (0);
}

