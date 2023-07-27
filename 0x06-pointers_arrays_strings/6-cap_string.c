#include "main.h"
#include <stdio.h>
/**
 *  *  *  *  *isLower - swaps the values of two integers
 *    *    *    *    *@c : 1st pointer
 *        *       *      Return: return 1 is true , 0 if false
 */
int isLower(char c)
{
return (c >= 97 && c <= 122);
}
/**
 *  *  *  *  *  *isDelimiter - swaps the values of two integers
 *   *    *    *    *    *@c : 1st pointer
 *    *        *       *      Return: return 1 is true , 0 if false
 */
int isDelimiter(char c)
{
int i;
char delimiter[] = " \t\n,;.!?\"(){}";
	for (i = 0; i < 13; i++)
		if (c == delimiter[i])
			return (1);
return (0);
}

/**
 *  *  *  *  *cap_string - swaps the values of two integers
 *       *@s : most number of bytes from src
 *        *       *      Return: return string to captalize word
 */

char *cap_string(char *s)
{
char *ptr = s;
int x = 1;
while (*s)
{
	if (isDelimiter(*s))
		x = 1;
	else if (isLower(*s) && x)
	{
		*s -= 32;
		x = 0;
	}
	else
		x = 0;
s++;
}
return (ptr);
}
