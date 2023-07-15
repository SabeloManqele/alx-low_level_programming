#include <stdio.h>
/**
 * main - reverse alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
char rv[26] = "zyxwvutsrqponmlkjihgfedcba";

int i;

for (i = 0; i < 26; i++)
{
putchar(rv[i]);
}
putchar('\n');
return (0);
}
