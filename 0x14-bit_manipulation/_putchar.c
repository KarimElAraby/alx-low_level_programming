#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @s: The character to print
 * Return: On success 1.
 *    *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
