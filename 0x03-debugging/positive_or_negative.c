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
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "Zero");
	}
	return (0);
}
