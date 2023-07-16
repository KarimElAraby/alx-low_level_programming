#include <stdio.h>
/**
 *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *
 *    *    *    *    *    * Return: Always 0 (Success)
 */
int main(void)
{
int x = 0, y, z;
while (x <= 9)
{
y = 0;
while (y <= 9)
{
z = 0;
while (z <= 9)
{
if (x != y && x < y && x != z && x < z && y < z && y != z)
{
putchar(x + 48);
putchar(y + 48);
putchar(z + 48);
if (x + y + z != 24)
{
putchar(',');
putchar(' ');
}
}
z++;
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
