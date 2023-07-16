#include <stdio.h>
/**
 * main - numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
int s = '0';

int p = '0';

int t = '0';

for (t = '0'; t <= '9'; t++)
{
for (p = '0'; p <= '9'; p++)
{
for (s = '0'; s <= '9'; s++)
{
if (!((s == p) || (p == t) || (p > s) || (t > p)))
{
putchar(t);
putchar(p);
putchar(s);
if (!(s == '9' && t == '7' && p == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
