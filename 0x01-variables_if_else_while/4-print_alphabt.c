#include <stdio.h>
/**
 * main - exclude alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
char ex[24] = "abcdfghijklmnoprstuvwxyz";

int i;

for (i = 0; i < 24; i++)
{
putchar(ex[i]);
}
putchar('\n');
return (0);
}
