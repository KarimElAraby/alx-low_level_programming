#include <stdio.h>
/**
 *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *
 *    *    *    *    *    * Return: Always 0 (Success)
 */
int main(void)
{
char ch1 = 'a';
while (ch1 <= 'z')
{
putchar(ch1);
ch1++;
}
 char ch2 = 'A';
while (ch2 <= 'Z')
{
 putchar(ch2);
 ch2++;
}
putchar('\n');
return (0);
}
