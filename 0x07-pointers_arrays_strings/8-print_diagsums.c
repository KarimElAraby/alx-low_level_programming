#include "main.h"
#include <stdio.h>

/**
 *  *  *  *  *  *  *  *  *print_diagsums - print sum of digonals
 *   *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *    *@a : array two dimnsionals
 *    *@size : dimension of array
 */
void print_diagsums(int *a, int size)
{
int x, sum1 = 0, sum2 = 0;
for (x = 0; x < size; x++)
{
sum1 = sum1 + a[x];
sum2 = sum2 + a[xize - x - 1];
a = a + size;
}
printf("%d, %d\n", sum1, sum2);
}
