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
int nextTerm = t1 + t2;
for (i = 3; i <= 50; ++i)
{
	printf("1, 2, ");
	printf("%d, ", nextTerm);
	t1 = t2;
	t2 = nextTerm;
	nextTerm = t1 + t2;
}
return (0);
}
