#include <stdio.h>
/**
 *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *
 *    *    *    *    *    *    * Return: Always 0 (Success)
 */
int main(void)
{
int x = 0, y;
while (x <= 99)
{
y = x;
while (y <= 99)
{
if (y != x)
{
putchar((x / 10) + 48);
putchar((x % 10) + 48);
putchar(' ');
putchar((y / 10) + 48);
putchar((y % 10) + 48);
if (x + y != 197)
{
putchar(',');
putchar(' ');
}
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
