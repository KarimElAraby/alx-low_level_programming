#include "main.h"
/**
 *  * jack_bauer  -  function to print last digit
 *
 */
void jack_bauer(void)
{
int x = 0, y;
while (x < 24)
{
y = 0;
while (y <= 59)
{
_putchar((x / 10) + 48);
_putchar((x % 10) + 48);
_putchar(':');
_putchar((y / 10) + 48);
_putchar((y % 10) + 48);
_putchar('\n');
y++;
}
x++;
}
}
