#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integrer
 *
 * @num: the int to check
 *
 * Return: the absolute value of int
 *
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	return (-num);
}
