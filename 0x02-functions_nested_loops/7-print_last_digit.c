#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: the int to extract the last digit from
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int i)
{
	int k;

	if (i < 0)
		i = -i;

	k = i % 10;

	if (k < 0)
		k = -k;

	_putchar(k + '0');

	return (k);
}
