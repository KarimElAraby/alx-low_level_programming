#include "function_pointers.h"

/**
 * array_iterator - function to print the array
 * @array : given array
 * @size : size of array
 * @action : givern function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && size && action)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
