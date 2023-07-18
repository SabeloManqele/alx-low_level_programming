#include <stdio.h>

/**
 * main - Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long fn1 = 0, fn2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fn1 + fn2;
		printf("%lu", sum);

		fn1 = fn2;
		fn2 = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
