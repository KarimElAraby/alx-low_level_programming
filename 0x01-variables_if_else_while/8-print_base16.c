#include <stdio.h>
/**
 *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *
 *    *    *    *    *    * Return: Always 0 (Success)
 */
int main(void)
{
int ch = 0;
while (ch < 16)
{
printf("%x", ch);
ch++;
}
putchar('\n');
return (0);
}
