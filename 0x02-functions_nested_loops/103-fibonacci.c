#include <stdio.h>
/**
 *  *  *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *    * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long t1 = 0, t2 = 1, nextTerm;
float total_sum;
while (1 < 2)
{
nextTerm = t1 + t2;
if (nextTerm > 4000000)
	break;
if ((nextTerm % 2) == 0)
	total_sum += nextTerm;
	t1 = t2;
	t2 = nextTerm;
}
printf("%.0f\n", total_sum);
return (0);
}
