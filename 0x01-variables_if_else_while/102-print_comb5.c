#include <stdio.h>
/**
 *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *
 *    *    *    *    *    *    * Return: Always 0 (Success)
 */
int main(void)
{
int x = 0, y, z, w;
while (x <= 9)
{
y = 0;
while (y <= 9)
{
z = 0;
while (z <= 9)
{
w = 0;
while (w <= 9)
{
if (x >= y && x <= z && x <= w  &&  x + y != z + w)
{
putchar(x + 48);
putchar(y + 48);
putchar(' ');
putchar(z + 48);
putchar(w + 48);
if (x + y + z + w != 197)
{
putchar(',');
putchar(' ');
}
}
w++;
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

