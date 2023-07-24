#include "main.h"
/**
 *reset_to_98 - updates the value it points to to 98
 *
 *@n : pointer
 *
 */
void reset_to_98(int *n)
{
int x;
x = 98;
*n = &x;
}
