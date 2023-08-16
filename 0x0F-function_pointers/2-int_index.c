#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array : given array
 * @size : size of array
 * @cmp : given function
 * Return: return element , -1 if no element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int j = 0;

if (size <= 0)
	return (-1);

while (j < size)
{
	if (cmp(array[j]) != 0)
		return (j);
	j++;
}
return (-1);
}
