#include "main.h"
/**
 * positive_or_negative - negative, positive or zero
 * @i: check number
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "Negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "Positive");
	}
	else
	{
		printf("%d is %s\n", i, "Zero");
	}
	return;
}
