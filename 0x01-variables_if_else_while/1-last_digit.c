
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int n2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		n2 = n % 10;

		printf("Last digit of %d is %d is greater than 5\n", n, n2);
	} else if (n % 10 == 0)
	{
		n2 = n % 10;

		printf("Last digit of %d is %d and is \n", n, n2);
	} else if (n % 10 != 0 && n < 6)
	{
		n2 = n % 10;

		printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, n2);
	}
	return (0);
}

