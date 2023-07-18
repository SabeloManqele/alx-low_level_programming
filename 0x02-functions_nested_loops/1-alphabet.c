#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - alphabet
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;

	}
	_putchar('\n');

}
