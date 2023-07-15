#include <stdio.h>
/**
 * main - base
 *
 * Return: 0 (Success)
 */
int main(void)
{
char a;

int i;

a = 'a';
i = 0;
while (i <= 9)
{
putchar(i + '0');
i++;
}
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
