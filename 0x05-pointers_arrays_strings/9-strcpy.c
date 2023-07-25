#include "main.h"
/**
 *  *  *_strcpy - swaps the values of two integers
 *   *   *
 *    *    *@dest : 1st pointer
 *     *     *@src : 2nd pointer
 *      *      *
 *      Return: value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
