#include "main.h"
/**
 *  *  *  print_alphabet_x10 - utilizes on the _putchar function to print
 *   *                   the alphabet a - z x10 times
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
