#include <stdio.h>
/**
 * fileds - int number of array
 *
 * buf - const char that will array
 *
 * nbyte - unsigned int
 *
 * main - Entry point
 *
 * Return: Always 1 (error)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
