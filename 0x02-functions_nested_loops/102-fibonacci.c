#include <stdio.h>
/**
 *  *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int t1 = 1, t2 = 2;
unsigned long int  nextTerm = t1 + t2;
	printf("1, 2, ");
for (i = 3; i <= 50; ++i)
{
	printf("%lu, ", nextTerm);
	t1 = t2;
	t2 = nextTerm;
	nextTerm = t1 + t2;
}
return (0);
}
