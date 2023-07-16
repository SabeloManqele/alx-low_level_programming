#include <stdio.h>
/**
 * main - number pair
 *
 * Return: 0 (Success)
 */
int main(void)
{
int s = '0';

int p = '0';

for (p = '0'; p <= '9'; p++)
{
for (s = '0'; s <= '9'; s++)
{
if (!((s == p) || (p > s)))
{
putchar(p);
putchar(s);
if (!(s == '9' && p == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
